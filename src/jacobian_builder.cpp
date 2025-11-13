#include "jacobian_builder.h"
#include <iostream>
#include <sstream>
#include <algorithm>
#include <cassert>
#include <unordered_set>
#include <functional>
//build residual expressions (simple lowering: residual = LHS - RHS for analog assigns)
JacobianBuilder::JacobianBuilder(SymbolTable &st, const std::vector<std::shared_ptr<AnalogAssign>> &assigns_) : symtab(st), assigns(assigns_){
    constructResidualExprs(); //prepare independent indices and map
    indIndices = symtab.independentIndices();
    n = (int)indIndices.size();
    symToVarIndex.assign(symtab.size(), -1);
    for (int i = 0; i < n; ++i) symToVarIndex[indIndices[i]] = i;
    m = (int)residualExprs.size();
    tapeValid = false;
}

static ExprPtr replaceICallsNormalise(const ExprPtr &e, std::unordered_map<std::string, std::pair<std::string,std::string>> &branchMap){
    if (!e) return ExprPtr();
    if (auto n = dynamic_cast<NumberExpr*>(e.get())){//NumberExpr
        auto nn = std::make_shared<NumberExpr>(n->value);
        nn->original_text = n->original_text;
        return nn;
    }
    if (auto id = dynamic_cast<IdentifierExpr*>(e.get())){//IdentifierExpr
        return std::make_shared<IdentifierExpr>(id->name);
    }
    if (auto s = dynamic_cast<StringExpr*>(e.get())){//StringExpr
        return std::make_shared<StringExpr>(s->value);
    }
    if (auto be = dynamic_cast<BinaryExpr*>(e.get())){//BinaryExpr
        auto L = replaceICallsNormalise(be->left, branchMap);
        auto R = replaceICallsNormalise(be->right, branchMap);
        return std::make_shared<BinaryExpr>(be->op, L, R);
    }
    if (auto ue = dynamic_cast<UnaryExpr*>(e.get())){//UnaryExpr
        auto opnd = replaceICallsNormalise(ue->operand, branchMap);
        return std::make_shared<UnaryExpr>(ue->op, opnd);
    }
    if (auto te = dynamic_cast<TernaryExpr*>(e.get())){//TernaryExpr
        auto c = replaceICallsNormalise(te->cond, branchMap);
        auto t = replaceICallsNormalise(te->ifTrue, branchMap);
        auto f = replaceICallsNormalise(te->ifFalse, branchMap);
        return std::make_shared<TernaryExpr>(c, t, f);
    }
    if (auto fc = dynamic_cast<FunctionCallExpr*>(e.get())){//FunctionCallExpr
        std::string fname = fc->name;
        //normalise
        std::string fnlower = fname;
        std::transform(fnlower.begin(), fnlower.end(), fnlower.begin(), ::tolower);
        if ((fnlower == "i") && fc->args.size() >= 2){//if fucnction call I(a,b) create identifier "I(a,b)" and record branch for later
            auto aarg = dynamic_cast<IdentifierExpr*>(fc->args[0].get());
            auto barg = dynamic_cast<IdentifierExpr*>(fc->args[1].get());
            if (aarg && barg){
                std::ostringstream oss;
                oss << "I(" << aarg->name << "," << barg->name << ")";
                std::string branchSym = oss.str();
                branchMap[branchSym] = {aarg->name, barg->name};
                return std::make_shared<IdentifierExpr>(branchSym);
            }
        }
        //else rebuild function with transformed args
        auto newFc = std::make_shared<FunctionCallExpr>(fname);
        for (auto &arg : fc->args) newFc->args.push_back(replaceICallsNormalise(arg, branchMap));
        return newFc;
    }
    return ExprPtr();//fallback
}

//replace V(a,b) in expresion with (V(a) - V(b))
static ExprPtr replaceVcallsWithDiff(const ExprPtr &e, const std::string &aName, const std::string &bName){
    if (!e) return ExprPtr();
    if (auto n = dynamic_cast<NumberExpr*>(e.get())){//NumberExpr
        auto nn = std::make_shared<NumberExpr>(n->value);
        nn->original_text = n->original_text;
        return nn;
    }
    if (auto id = dynamic_cast<IdentifierExpr*>(e.get())){//Identifier
        return std::make_shared<IdentifierExpr>(id->name);
    }
    if (auto s = dynamic_cast<StringExpr*>(e.get())){//String
        return std::make_shared<StringExpr>(s->value);
    }
    if (auto be = dynamic_cast<BinaryExpr*>(e.get())){//BinaryExpr
        auto L = replaceVcallsWithDiff(be->left, aName, bName);
        auto R = replaceVcallsWithDiff(be->right, aName, bName);
        return std::make_shared<BinaryExpr>(be->op, L, R);
    }
    if (auto ue = dynamic_cast<UnaryExpr*>(e.get())){//UnaryExpr
        auto opnd = replaceVcallsWithDiff(ue->operand, aName, bName);
        return std::make_shared<UnaryExpr>(ue->op, opnd);
    }
    if (auto te = dynamic_cast<TernaryExpr*>(e.get())){//TernaryExpr
        auto c = replaceVcallsWithDiff(te->cond, aName, bName);
        auto t = replaceVcallsWithDiff(te->ifTrue, aName, bName);
        auto f = replaceVcallsWithDiff(te->ifFalse, aName, bName);
        return std::make_shared<TernaryExpr>(c, t, f);
    }
    
    if (auto fc = dynamic_cast<FunctionCallExpr*>(e.get())){//FunctionCallExpr
        std::string fname = fc->name;
        //normalise name if needed
        std::string fnlower = fname;
        std::transform(fnlower.begin(), fnlower.end(), fnlower.begin(), ::tolower);

        //If this is V(a,b) and matches the target, replace with Va - Vb
        if ((fnlower == "v") && fc->args.size() >= 2){//Check if ecpression is "V" with 2 args
            if (auto aarg = dynamic_cast<IdentifierExpr*>(fc->args[0].get())){//Check if args are the relevent ones
                if (auto barg = dynamic_cast<IdentifierExpr*>(fc->args[1].get())){
                    if (aarg->name == aName && barg->name == bName){
                        auto va = std::make_shared<IdentifierExpr>(aName);
                        auto vb = std::make_shared<IdentifierExpr>(bName);
                        return std::make_shared<BinaryExpr>(std::string("-"), va, vb);//Make Va - Vb
                    }
                }
            }
        }
        //Otherwise rebuild function call with transformed args
        auto newFc = std::make_shared<FunctionCallExpr>(fname);
        for (auto &arg : fc->args) newFc->args.push_back(replaceVcallsWithDiff(arg, aName, bName));
        return newFc;
    }

    //fallback
    return ExprPtr();
}
void JacobianBuilder::constructResidualExprs(){
    residualExprs.clear();
    
    //std::cerr << "assigns.size() = " << assigns.size() << "\n";

    ResidualConstructionState state;
    
    //Step 1: Normalise all assignments
    normaliseAssignments(state);
    
    //Step 2: Process each assignment
    for (size_t i = 0; i < assigns.size(); ++i){
        if (!assigns[i]) continue;
        processAssignment(i, state);
    }
    
    //Step 3: Determine which branches are needed
    collectNeededBranches(state);
    
    //Step 4: Build final residual vector
    buildFinalResidualVector(state);
    
    m = (int)residualExprs.size();
    
    //std::cerr << "constructResidualExprs(): residualExprs.size() = " << residualExprs.size() << "\n";
    //std::cerr << "final independent residual ASTs:\n";
    //auto indepIdxs = symtab.independentIndices();
    //for (size_t i = 0; i < indepIdxs.size(); ++i){
    //   int sidx = indepIdxs[i];
    //   std::cerr << " residual for var" << i << " symIdx=" << sidx << " name=" << symtab[sidx].name << " :\n";
    //   if (residualExprs[i]) residualExprs[i]->dump(std::cerr, 4);
    //   else std::cerr << "  <null>\n";
    //}
}
void JacobianBuilder::normaliseAssignments(ResidualConstructionState& state){
    state.lhs_transformed.resize(assigns.size());
    state.rhs_transformed.resize(assigns.size());
    
    for (size_t i = 0; i < assigns.size(); ++i){
        auto &a = assigns[i];
        if (!a){
            state.lhs_transformed[i] = nullptr;
            state.rhs_transformed[i] = nullptr;
            continue;
        }
        
        state.lhs_transformed[i] = replaceICallsNormalise(a->lhs, state.branchMap);
        state.rhs_transformed[i] = a->rhs ? replaceICallsNormalise(a->rhs, state.branchMap) : makeNumber(0.0);
    }
}

bool JacobianBuilder::processAssignment(size_t index, ResidualConstructionState& state){
    auto &a = assigns[index];
    if (!a) return false;

    ExprPtr L = state.lhs_transformed[index];
    ExprPtr R = state.rhs_transformed[index] ? state.rhs_transformed[index] : makeNumber(0.0);

    //std::cerr << " assign[" << index << "] transformed LHS= ";
    //if (L) L->dump(std::cerr, 4); else std::cerr << "<null>\n";
    //std::cerr << "                RHS= ";
    //if (R) R->dump(std::cerr, 4); else std::cerr << "<null>\n";

    //Try different patterns in order
    if (processVNodePattern(L, R, state)) return true;
    if (processVNodesPattern(L, R, state)) return true;
    
    //If no pattern matched, process as fallback
    processFallbackResidual(L, R, state);
    return true;
}

bool JacobianBuilder::processVNodePattern(const ExprPtr& L, const ExprPtr& R, ResidualConstructionState& state){
    auto lhsFc = std::dynamic_pointer_cast<FunctionCallExpr>(L);
    if (!lhsFc) return false;
    
    std::string fnlower = lhsFc->name;
    std::transform(fnlower.begin(), fnlower.end(), fnlower.begin(), ::tolower);
    
    if ((fnlower == "v") && lhsFc->args.size() == 1){
        if (auto a0 = std::dynamic_pointer_cast<IdentifierExpr>(lhsFc->args[0])){
            std::string nameA = a0->name;
            //stamp Va - R
            auto va = std::make_shared<IdentifierExpr>(nameA);
            auto res = std::make_shared<BinaryExpr>(std::string("-"), va, R);
            addToNodeResidual(nameA, res, state);
            //std::cerr << "lowered V(node) assignment -> node '" << nameA << "'\n";
            return true;
        }
    }
    return false;
}

bool JacobianBuilder::processVNodesPattern(const ExprPtr& L, const ExprPtr& R, ResidualConstructionState& state){
    auto lhsFc = std::dynamic_pointer_cast<FunctionCallExpr>(L);
    if (!lhsFc) return false;
    
    std::string fnlower = lhsFc->name;
    std::transform(fnlower.begin(), fnlower.end(), fnlower.begin(), ::tolower);
    
    if ((fnlower == "v") && lhsFc->args.size() >= 2){
        auto a0 = std::dynamic_pointer_cast<IdentifierExpr>(lhsFc->args[0]);
        auto a1 = std::dynamic_pointer_cast<IdentifierExpr>(lhsFc->args[1]);
        if (a0 && a1){
            std::string nameA = a0->name;
            std::string nameB = a1->name;
            
            //if (processResistorLikePattern(L, R, nameA, nameB, state)) return true; //Simplify maybe?
            if (processGenericBranchPattern(L, R, nameA, nameB, state)) return true;
        }
    }
    return false;
}
ExprPtr JacobianBuilder::makeNumber(double value) const {
    auto n = std::make_shared<NumberExpr>(value);
    n->original_text = std::to_string(value);
    return n;
}

ExprPtr JacobianBuilder::negateExpr(const ExprPtr& expr) const {
    return std::make_shared<BinaryExpr>(std::string("*"), makeNumber(-1.0), expr);
}

void JacobianBuilder::addToNodeResidual(const std::string& nodeName, const ExprPtr& term, ResidualConstructionState& state){
    if (nodeName.empty() || !term) return;
    auto it = state.nodeResidualsMap.find(nodeName);
    if (it == state.nodeResidualsMap.end()){
        state.nodeResidualsMap[nodeName] = term;
    } else {
        it->second = std::make_shared<BinaryExpr>(std::string("+"), it->second, term);
    }
}
//Check for resistor-like pattern: R * I(a,b)
bool JacobianBuilder::processResistorLikePattern(const ExprPtr& L, const ExprPtr& R, const std::string& nameA, const std::string& nameB, ResidualConstructionState& state){
    BranchAnalyser analyser(state.branchMap);
    ExprPtr factorExpr = nullptr;
    
    if (auto be = std::dynamic_pointer_cast<BinaryExpr>(R)){
        if (analyser.isBranchIdentifier(be->left, nameA, nameB)){
            factorExpr = be->right;
        } else if (analyser.isBranchIdentifier(be->right, nameA, nameB)){
            factorExpr = be->left;
        }
    } else if (analyser.isBranchIdentifier(R, nameA, nameB)){
        factorExpr = makeNumber(1.0);
    }
    
    if (!factorExpr) return false;
    
    //Lower to (Va - Vb) / factor → add to node residuals
    auto va = std::make_shared<IdentifierExpr>(nameA);
    auto vb = std::make_shared<IdentifierExpr>(nameB);
    auto diff = std::make_shared<BinaryExpr>(std::string("-"), va, vb);
    auto term = std::make_shared<BinaryExpr>(std::string("/"), diff, factorExpr);
    
    addToNodeResidual(nameA, term, state);
    addToNodeResidual(nameB, negateExpr(term), state);
    
    //Mark branch as eliminated
    std::function<void(const ExprPtr&)> markIfBranchId = [&](const ExprPtr& ex){
        if (!ex) return;
        if (auto id = std::dynamic_pointer_cast<IdentifierExpr>(ex)){
            auto it = state.branchMap.find(id->name);
            if (it != state.branchMap.end() && it->second.first == nameA && it->second.second == nameB){
                state.eliminatedBranches.insert(id->name);
            }
        } else if (auto be2 = std::dynamic_pointer_cast<BinaryExpr>(ex)){
            markIfBranchId(be2->left);
            markIfBranchId(be2->right);
        } else if (auto fc2 = std::dynamic_pointer_cast<FunctionCallExpr>(ex)){
            for (auto& arg : fc2->args) markIfBranchId(arg);
        } else if (auto ue2 = std::dynamic_pointer_cast<UnaryExpr>(ex)){
            markIfBranchId(ue2->operand);
        }
    };
    markIfBranchId(R);
    
    //std::cerr << "lowered resistor-like pattern between nodes '" << nameA << "' and '" << nameB << "'\n";
    return true;
}

bool JacobianBuilder::processGenericBranchPattern(const ExprPtr& L, const ExprPtr& R, const std::string& nameA, const std::string& nameB, ResidualConstructionState& state){
    //Generic branch handling: V(a,b) = complex_expression
    ExprPtr rhs_transformed = replaceVcallsWithDiff(R, nameA, nameB);
    
    //Create branch symbol I(a,b)
    std::ostringstream bss;
    bss << "I(" << nameA << "," << nameB << ")";
    std::string branchSym = bss.str();
    ExprPtr branchId = std::make_shared<IdentifierExpr>(branchSym);
    
    //Stamp KCL: +I into node A, -I into node B
    addToNodeResidual(nameA, branchId, state);
    addToNodeResidual(nameB, negateExpr(branchId), state);
    
    //Build branch residual = (Va - Vb) - rhs_transformed
    auto va = std::make_shared<IdentifierExpr>(nameA);
    auto vb = std::make_shared<IdentifierExpr>(nameB);
    auto diff = std::make_shared<BinaryExpr>(std::string("-"), va, vb);
    ExprPtr branchRes = std::make_shared<BinaryExpr>(std::string("-"), diff, rhs_transformed);
    
    state.pendingBranchResiduals[branchSym] = branchRes;
    state.neededBranches.insert(branchSym);
    
    //std::cerr << "created generic branch pattern for " << branchSym << "\n";
    return true;
}
void JacobianBuilder::buildFinalResidualVector(ResidualConstructionState& state){
    //Convert nodeResidualsMap into vector indexed by symbol index
    std::vector<ExprPtr> nodeResiduals(symtab.size(), nullptr);
    
    for (auto& kv : state.nodeResidualsMap){
        const std::string& nodeName = kv.first;
        ExprPtr expr = kv.second;
        int idx = symtab.find(nodeName);
        if (idx >= 0 && idx < (int)nodeResiduals.size()){
            if (!nodeResiduals[idx]){
                nodeResiduals[idx] = expr;
            } else {
                nodeResiduals[idx] = std::make_shared<BinaryExpr>(std::string("+"), nodeResiduals[idx], expr);
            }
        } else {
            //std::cerr << "warning: node '" << nodeName << "' not present in symtab; skipping its node residual\n";
        }
    }
    
    //Place pending branch residuals
    for (auto& kv : state.pendingBranchResiduals){
        const std::string& bn = kv.first;
        ExprPtr res = kv.second;
        int idx = symtab.find(bn);
        if (idx >= 0 && idx < (int)nodeResiduals.size()){
            if (!nodeResiduals[idx]){
                nodeResiduals[idx] = res;
            } else {
                nodeResiduals[idx] = std::make_shared<BinaryExpr>(std::string("+"), nodeResiduals[idx], res);
            }
            //std::cerr << "placed pending branch-residual into nodeResiduals[" << idx << "] for " << bn << "\n";
        } else {
            state.fallbackResiduals.push_back(res);
            //std::cerr << "pending branch symbol " << bn << " not found in symtab; pushed to fallback\n";
        }
    }
    
    //Process branch-definition residuals
    for (auto& a : assigns){
        if (!a || !a->lhs) continue;
        if (auto lhsFcOrig = std::dynamic_pointer_cast<FunctionCallExpr>(a->lhs)){
            std::string fnlower = lhsFcOrig->name;
            std::transform(fnlower.begin(), fnlower.end(), fnlower.begin(), ::tolower);
            if (fnlower == "i" && lhsFcOrig->args.size() >= 2){
                auto aa = std::dynamic_pointer_cast<IdentifierExpr>(lhsFcOrig->args[0]);
                auto bb = std::dynamic_pointer_cast<IdentifierExpr>(lhsFcOrig->args[1]);
                if (!aa || !bb) continue;
                
                std::ostringstream oss;
                oss << "I(" << aa->name << "," << bb->name << ")";
                std::string branchSym = oss.str();
                
                //Skip if branch was eliminated
                if (state.eliminatedBranches.count(branchSym)){
                    //std::cerr << "  skipping branch-residual for eliminated branch " << branchSym << "\n";
                    continue;
                }
                
                //Produce branch residual: I(a,b) - rhs_transformed
                ExprPtr rhs_orig = a->rhs ? a->rhs : makeNumber(0.0);
                ExprPtr rhs_trans = replaceVcallsWithDiff(rhs_orig, aa->name, bb->name);
                ExprPtr branchId = std::make_shared<IdentifierExpr>(branchSym);
                ExprPtr res = std::make_shared<BinaryExpr>(std::string("-"), branchId, rhs_trans);
                
                int idx = symtab.find(branchSym);
                if (idx >= 0 && idx < (int)nodeResiduals.size()){
                    if (!nodeResiduals[idx]){
                        nodeResiduals[idx] = res;
                    } else {
                        nodeResiduals[idx] = std::make_shared<BinaryExpr>(std::string("+"), nodeResiduals[idx], res);
                    }
                    //std::cerr << "placed branch-residual into nodeResiduals[" << idx << "] for " << branchSym << "\n";
                } else {
                    state.fallbackResiduals.push_back(res);
                    //std::cerr << "branch symbol " << branchSym << " not in symtab; pushed to fallback\n";
                }
            }
        }
    }
    
    //KCL branch handler
    for (auto& a : assigns){
        if (!a || !a->lhs) continue;
        if (auto lhsFcOrig = std::dynamic_pointer_cast<FunctionCallExpr>(a->lhs)){
            std::string fnlower = lhsFcOrig->name;
            std::transform(fnlower.begin(), fnlower.end(), fnlower.begin(), ::tolower);
            if (fnlower == "i" && lhsFcOrig->args.size() >= 2){
                auto aa = std::dynamic_pointer_cast<IdentifierExpr>(lhsFcOrig->args[0]);
                auto bb = std::dynamic_pointer_cast<IdentifierExpr>(lhsFcOrig->args[1]);
                if (!aa || !bb) continue;
                
                std::ostringstream oss;
                oss << "I(" << aa->name << "," << bb->name << ")";
                std::string branchSym = oss.str();
                
                //Skip if branch was eliminated
                if (state.eliminatedBranches.count(branchSym)){
                    continue;
                }
                
                //ADD KCL CONTRIBUTIONS
                ExprPtr branchId = std::make_shared<IdentifierExpr>(branchSym);
                
                //+I(a,b) at node a
                int idxA = symtab.find(aa->name);
                if (idxA >= 0 && idxA < (int)nodeResiduals.size()){
                    if (!nodeResiduals[idxA]){
                        nodeResiduals[idxA] = branchId;
                    } else {
                        nodeResiduals[idxA] = std::make_shared<BinaryExpr>(std::string("+"), nodeResiduals[idxA], branchId);
                    }
                }
                
                //-I(a,b) at node b  
                int idxB = symtab.find(bb->name);
                if (idxB >= 0 && idxB < (int)nodeResiduals.size()){
                    ExprPtr negBranchId = negateExpr(branchId);
                    if (!nodeResiduals[idxB]){
                        nodeResiduals[idxB] = negBranchId;
                    } else {
                        nodeResiduals[idxB] = std::make_shared<BinaryExpr>(std::string("+"), nodeResiduals[idxB], negBranchId);
                    }
                }
            }
        }
    }
    //Build final residual vector
    std::vector<int> indeps = symtab.independentIndices();
    for (int idx : indeps){
        if (idx >= 0 && idx < (int)nodeResiduals.size() && nodeResiduals[idx]){
            residualExprs.push_back(nodeResiduals[idx]);
        } else {
            residualExprs.push_back(makeNumber(0.0));
        }
    }
    
    //Append fallback residuals
    for (auto& r : state.fallbackResiduals){
        residualExprs.push_back(r);
    }
}
//BranchAnalyser implementation
bool JacobianBuilder::BranchAnalyser::isBranchIdentifier(const ExprPtr& e, const std::string& targetA, const std::string& targetB) const {
    if (!e) return false;
    if (auto id = std::dynamic_pointer_cast<IdentifierExpr>(e)){
        auto it = branchMap_.find(id->name);
        if (it == branchMap_.end()) return false;
        if (targetA.empty() && targetB.empty()) return true; //Any branch
        return (it->second.first == targetA && it->second.second == targetB);
    }
    return false;
}

void JacobianBuilder::BranchAnalyser::collectBranchIdentifiers(const ExprPtr& e, 
                                                              std::unordered_set<std::string>& found) const {
    if (!e) return;
    if (auto id = std::dynamic_pointer_cast<IdentifierExpr>(e)){
        if (branchMap_.count(id->name)){
            found.insert(id->name);
        }
    } else if (auto be = std::dynamic_pointer_cast<BinaryExpr>(e)){
        collectBranchIdentifiers(be->left, found);
        collectBranchIdentifiers(be->right, found);
    } else if (auto fc = std::dynamic_pointer_cast<FunctionCallExpr>(e)){
        for (auto& arg : fc->args){
            collectBranchIdentifiers(arg, found);
        }
    } else if (auto ue = std::dynamic_pointer_cast<UnaryExpr>(e)){
        collectBranchIdentifiers(ue->operand, found);
    } else if (auto te = std::dynamic_pointer_cast<TernaryExpr>(e)){
        collectBranchIdentifiers(te->cond, found);
        collectBranchIdentifiers(te->ifTrue, found);
        collectBranchIdentifiers(te->ifFalse, found);
    }
}

bool JacobianBuilder::referencesHandledBranches(const ExprPtr& expr, const ResidualConstructionState& state) const {
    if (!expr) return false;
    
    bool found = false;
    std::function<void(const ExprPtr&)> scan = [&](const ExprPtr& e){
        if (!e || found) return;
        if (auto id = std::dynamic_pointer_cast<IdentifierExpr>(e)){
            if (state.pendingBranchResiduals.count(id->name) || state.neededBranches.count(id->name)){
                found = true;
                return;
            }
        } else if (auto be = std::dynamic_pointer_cast<BinaryExpr>(e)){
            scan(be->left);
            scan(be->right);
        } else if (auto fc = std::dynamic_pointer_cast<FunctionCallExpr>(e)){
            for (auto& a : fc->args){
                scan(a);
                if (found) return;
            }
        } else if (auto ue = std::dynamic_pointer_cast<UnaryExpr>(e)){
            scan(ue->operand);
        } else if (auto te = std::dynamic_pointer_cast<TernaryExpr>(e)){
            scan(te->cond);
            if (found) return;
            scan(te->ifTrue);
            if (found) return;
            scan(te->ifFalse);
        }
    };
    
    scan(expr);
    return found;
}
void JacobianBuilder::processFallbackResidual(const ExprPtr& L, const ExprPtr& R, 
                                             ResidualConstructionState& state){
    BranchAnalyser analyser(state.branchMap);
    
    ExprPtr left = L ? std::static_pointer_cast<Expr>(L) : makeNumber(0.0);
    ExprPtr res = std::make_shared<BinaryExpr>(std::string("-"), left, R);
    //Skip if this is a branch identifier that we're handling elsewhere
    if (auto idL = std::dynamic_pointer_cast<IdentifierExpr>(L)){
        if (state.branchMap.count(idL->name)){
            //std::cerr << "deferring branch residual for " << idL->name << "\n";
            return;
        }
    }
    //Skip if it references branches we're already handling
    if (referencesHandledBranches(res, state)){
        //std::cerr << "skipped fallback residual (references handled branch)\n";
        return;
    }
    state.fallbackResiduals.push_back(res);
    //std::cerr << "  fallback residual pushed\n";
}

void JacobianBuilder::collectNeededBranches(ResidualConstructionState& state){
    BranchAnalyser analyser(state.branchMap);
    
    //Scan fallback residuals for branch identifiers
    for (auto& r : state.fallbackResiduals){
        analyser.collectBranchIdentifiers(r, state.neededBranches);
    }
    
    //Mark branch symbols that appear as LHS I(a,b) in original assigns as needed
    for (auto& a : assigns){
        if (!a || !a->lhs) continue;
        if (auto lhsFcOrig = std::dynamic_pointer_cast<FunctionCallExpr>(a->lhs)){
            std::string fnlower = lhsFcOrig->name;
            std::transform(fnlower.begin(), fnlower.end(), fnlower.begin(), ::tolower);
            if (fnlower == "i" && lhsFcOrig->args.size() >= 2){
                if (auto aa = std::dynamic_pointer_cast<IdentifierExpr>(lhsFcOrig->args[0])){
                    if (auto bb = std::dynamic_pointer_cast<IdentifierExpr>(lhsFcOrig->args[1])){
                        std::ostringstream oss;
                        oss << "I(" << aa->name << "," << bb->name << ")";
                        state.neededBranches.insert(oss.str());
                    }
                }
            }
        }
    }
    
    //Remove eliminated branches
    for (auto& b : state.eliminatedBranches){
        state.neededBranches.erase(b);
    }
    
    //Add needed branch symbols to symtab
    for (auto& bn : state.neededBranches){
        if (symtab.find(bn) == -1){
            symtab.addSymbol(bn, true /* independent */, 0.0);
            //std::cerr << "added branch symbol to symtab: " << bn << "\n";
        }
    }
}


//build the CppAD tape (once). This records expression graph with AD<double>
void JacobianBuilder::buildTape(){
    //auto indeps = symtab.independentIndices();
    //std::cerr << "DEBUG symtab.size()=" << symtab.size() << " n=" << n << " indeps:";
    //for (int i=0;i<(int)indeps.size();++i){
    //   int sidx = indeps[i];
    //   std::cerr << " var" << i << "->symIdx=" << sidx << " name=" << symtab[sidx].name;
    //}
    //std::cerr << "\n";

    //std::cerr << "DEBUG symToVarIndex (len=" << symToVarIndex.size() << "):\n";
    //for (size_t i=0;i<symToVarIndex.size();++i){
    //   std::cerr << "  symIdx=" << i << " -> var=" << symToVarIndex[i];
    //   if (symToVarIndex[i] >= 0 && symToVarIndex[i] < (int)indeps.size())
    //       std::cerr << " (ind name=" << symtab[indeps[symToVarIndex[i]]].name << ")";
    //   std::cerr << "\n";
    //}

    using AD = JacobianBuilder::AD;

    //record with placeholder zeros for independent vector and zero prev-values
    std::vector<AD> ax;
    ax.resize(n);
    for (int i = 0; i < n; ++i) ax[i] = AD(0.0);

    //start recording
    CppAD::Independent(ax);

    //build prevValues placeholder (all zeros) for recording; ddt uses numeric prev only
    std::vector<double> prevPlaceholder(symtab.size(), 0.0);
    double dt_placeholder = 1.0; //arbitrary non-zero to avoid divide-by-zero during recording

    //evaluate residuals in AD domain
    std::vector<AD> ay;
    ay.reserve(m);
    for (int i = 0; i < m; ++i){
        AD r = evalExpr<AD>(residualExprs[i], ax, symToVarIndex, prevPlaceholder, dt_placeholder);
        ay.push_back(r);
    }
    f = CppAD::ADFun<double>(ax, ay);
    tapeValid = true;
}


//public build-if-needed (rebuild when topology or independent set changes)
void JacobianBuilder::buildIfNeeded(){
    if (!tapeValid) buildTape();
}


//evaluate numeric residuals & jacobian
void JacobianBuilder::evaluate(const std::vector<double> &x_current, double t, double dt, const std::vector<double> &prevValues, std::vector<double> &out_y, std::vector<double> &out_J_flat){
    if ((int)x_current.size() != n){
        throw std::runtime_error("JacobianBuilder::evaluate: x_current size mismatch");
    }
    //std::vector<double> ax_test(n, 0.0);
    //find the var index of the branch symbol
    //int branchSymIdx = symtab.find("I(a,b)"); //adjust name if needed
    //int varPos = (branchSymIdx >= 0 && branchSymIdx < (int)symToVarIndex.size()) ? symToVarIndex[branchSymIdx] : -1;
    //if (varPos >= 0){
    //    ax_test[varPos] = 123.45;
    //    double prevDummy = 0.0;
    //    double val = evalExpr<double>( residualExprs[varPos], ax_test, symToVarIndex, std::vector<double>(symtab.size(),0.0), 1.0 );
    //    std::cerr << "DEBUG evalExpr<double> branch residual with I=123.45 -> " << val << "\n";
    //} else {
    //    std::cerr << "DEBUG branch symbol not mapped to varPos (varPos=" << varPos << ")\n";
    //}

    buildIfNeeded();

    //forward evaluation (0th order)
    out_y = f.Forward(0, x_current);
    //dense jacobian
    out_J_flat = f.Jacobian(x_current);
}

template<typename T>
T JacobianBuilder::evalExpr(const ExprPtr &e, const std::vector<T> &ax, const std::vector<int> &symToVar, const std::vector<double> &prevValues, double dt){
    //convenience lambda to convert double to T
    auto asT = [](double v) -> T { return T(v); };

    if (!e) return asT(0.0);

    //NumberExpr
    if (auto num = dynamic_cast<NumberExpr*>(e.get())){
        return asT(num->value);
    }

    //IdentifierExpr
    if (auto id = dynamic_cast<IdentifierExpr*>(e.get())){
        const std::string &name = id->name;
        int idx = symtab.find(name);
        if (idx >= 0){
            int varPos = symToVar[idx];
            if (varPos >= 0){
                //independent return ax[varPos]
                return ax[varPos];
            } else {
                //parameter/known value
                return asT(symtab[idx].value);
            }
        } else {
            //unknown identifier treat as zero and warn
            return asT(0.0);
        }
    }

    //StringExpr treat as zero
    if (auto se = dynamic_cast<StringExpr*>(e.get())){
        return asT(0.0);
    }

    //FunctionCallExpr
    if (auto fc = dynamic_cast<FunctionCallExpr*>(e.get())){
        std::string fname = fc->name;
        if (!fname.empty() && fname.back() == '(') fname.pop_back();//normalise
        //lowercase name for matching
        std::transform(fname.begin(), fname.end(), fname.begin(), [](unsigned char c){ return std::tolower(c); });

        //IMPORTANT ddt(x) — compute (cur - prev)/dt
        if (fname == "ddt" || fname == "deriv"){
            if (fc->args.size() >= 1){
                T cur = evalExpr<T>(fc->args[0], ax, symToVar, prevValues, dt);
                double prev = 0.0;
                {
                    std::vector<double> tmpAx(ax.size());
                    for (int s = 0; s < (int)symToVar.size(); ++s){
                        int pos = symToVar[s];
                        if (pos >= 0 && pos < (int)tmpAx.size()){
                            tmpAx[pos] = (s < (int)prevValues.size()) ? prevValues[s] : symtab[s].value;
                        }
                    }
                    prev = this->evalExpr<double>(fc->args[0], tmpAx, symToVar, prevValues, dt);
                }
                if (dt == 0.0) return cur;
                return (cur - asT(prev)) / asT(dt);
            }
            return asT(0.0);
        }

        //V(nodeA, nodeB) -> Va - Vb
        if (fname == "v"){
            if (fc->args.size() == 1){
                return evalExpr<T>(fc->args[0], ax, symToVar, prevValues, dt);
            }
            if (fc->args.size() >= 2){
                T a = evalExpr<T>(fc->args[0], ax, symToVar, prevValues, dt);
                T b = evalExpr<T>(fc->args[1], ax, symToVar, prevValues, dt);
                return a - b;
            }
            return asT(0.0);
        }

        //Maths functions: sin, cos, ect
        if (fname == "sin"){
            auto arg = evalExpr<T>(fc->args[0], ax, symToVar, prevValues, dt);
            return CppAD::sin(arg);
        }

        if (fname == "cos"){
            return CppAD::cos(evalExpr<T>(fc->args[0], ax, symToVar, prevValues, dt));
        }
        if (fname == "tan"){
            return CppAD::tan(evalExpr<T>(fc->args[0], ax, symToVar, prevValues, dt));
        }
        if (fname == "asin"){
            return CppAD::asin(evalExpr<T>(fc->args[0], ax, symToVar, prevValues, dt));
        }
        if (fname == "acos"){
            return CppAD::acos(evalExpr<T>(fc->args[0], ax, symToVar, prevValues, dt));
        }
        if (fname == "atan"){
            return CppAD::atan(evalExpr<T>(fc->args[0], ax, symToVar, prevValues, dt));
        }
        if (fname == "sinh"){
            return CppAD::sinh(evalExpr<T>(fc->args[0], ax, symToVar, prevValues, dt));
        }
        if (fname == "cosh"){
            return CppAD::cosh(evalExpr<T>(fc->args[0], ax, symToVar, prevValues, dt));
        }
        if (fname == "exp"){
            return CppAD::exp(evalExpr<T>(fc->args[0], ax, symToVar, prevValues, dt));
        }
        if (fname == "log" || fname == "ln"){
            return CppAD::log(evalExpr<T>(fc->args[0], ax, symToVar, prevValues, dt));
        }
        if (fname == "sqrt"){
            return CppAD::sqrt(evalExpr<T>(fc->args[0], ax, symToVar, prevValues, dt));
        }
        if (fname == "abs" || fname == "fabs"){
            return CppAD::abs(evalExpr<T>(fc->args[0], ax, symToVar, prevValues, dt));
        }
        if (fname == "pow"){
            if (fc->args.size() >= 2){
                T base = evalExpr<T>(fc->args[0], ax, symToVar, prevValues, dt);
                T expn = evalExpr<T>(fc->args[1], ax, symToVar, prevValues, dt);
                return CppAD::pow(base, expn);
            }
            return asT(0.0);
        }

        //If arg is single numeric literal or identifier and the function name corresponds to a symbol
        {
            std::ostringstream oss;
            oss << fname << "(";
            for (size_t i = 0; i < fc->args.size(); ++i){
                if (auto idArg = dynamic_cast<IdentifierExpr*>(fc->args[i].get())){
                    oss << idArg->name;
                } else if (auto numArg = dynamic_cast<NumberExpr*>(fc->args[i].get())){
                    oss << numArg->original_text;
                } else {
                    oss << "?";
                }
                if (i + 1 < fc->args.size()) oss << ",";
            }
            oss << ")";
            std::string fnSym = oss.str();
            int idx = symtab.find(fnSym);
            if (idx >= 0){
                int pos = symToVar[idx];
                if (pos >= 0) return ax[pos];
                else return asT(symtab[idx].value);
            }
        }

        //fallback: name itself could be a symbol
        {
            int idx = symtab.find(fname);
            if (idx >= 0){
                int pos = symToVar[idx];
                if (pos >= 0) return ax[pos];
                else return asT(symtab[idx].value);
            }
        }

        // unknown function, evaluate arguments and return 0
        for (auto &arg : fc->args) evalExpr<T>(arg, ax, symToVar, prevValues, dt);
        return asT(0.0);
    }

    //BinaryExpr
    if (auto be = dynamic_cast<BinaryExpr*>(e.get())){
        T L = evalExpr<T>(be->left, ax, symToVar, prevValues, dt);
        T R = evalExpr<T>(be->right, ax, symToVar, prevValues, dt);
        const std::string &op = be->op;
        if (op == "+") return L + R;
        if (op == "-") return L - R;
        if (op == "*") return L * R;
        if (op == "/") return L / R;
        if (op == "%") return L;//IMPLIMENT ONE DAY
        if (op == "**") return CppAD::pow(L, R);
        return L;
    }

    //UnaryExpr
    if (auto ue = dynamic_cast<UnaryExpr*>(e.get())){
        T v = evalExpr<T>(ue->operand, ax, symToVar, prevValues, dt);
        if (ue->op == "+") return v;
        if (ue->op == "-") return -v;
        //other unary ops?
        return v;
    }

    //Ternary
    if (auto te = dynamic_cast<TernaryExpr*>(e.get())){
        //Evaluate the condition to a double using the curent ax values
        //If T = AD extract numeric values with CppAD::Value; else cast directly
        std::vector<double> ax_for_cond(ax.size());
        for (size_t i = 0; i < ax.size(); ++i){
            if constexpr (std::is_same_v<T, JacobianBuilder::AD>){
                ax_for_cond[i] = CppAD::Value(ax[i]);
            } else {
                ax_for_cond[i] = static_cast<double>(ax[i]);
            }
        }

        //Evaluate the condition expression as a double using actual ax values
        double condVal = evalExpr<double>(te->cond, ax_for_cond, symToVar, prevValues, dt);

        // Choose branch based on numeric condition; evaluate branch in type T so AD works correctly.
        if (condVal != 0.0) return evalExpr<T>(te->ifTrue, ax, symToVar, prevValues, dt);
        else return evalExpr<T>(te->ifFalse, ax, symToVar, prevValues, dt);
    }


    //Just make it zero if nothing works
    return asT(0.0);
}

template double JacobianBuilder::evalExpr<double>(
    const ExprPtr &,
    const std::vector<double> &,
    const std::vector<int> &,
    const std::vector<double> &,
    double);

template JacobianBuilder::AD JacobianBuilder::evalExpr<JacobianBuilder::AD>(
    const ExprPtr &,
    const std::vector<JacobianBuilder::AD> &,
    const std::vector<int> &,
    const std::vector<double> &,
    double);
