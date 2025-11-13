#pragma once
#include <vector>
#include <memory>
#include <string>
#include <cppad/cppad.hpp>
#include <unordered_set>
#include "symbol_table.h"
#include "ast.h"


class JacobianBuilder {
public:
    using AD = CppAD::AD<double>;
    JacobianBuilder(SymbolTable &symtab,
                    const std::vector<std::shared_ptr<AnalogAssign>> &assigns);

    void buildIfNeeded();

    void evaluate(const std::vector<double> &x_current, double t, double dt, const std::vector<double> &prevValues, std::vector<double> &out_y, std::vector<double> &out_J_flat);

    int numUnknowns() const { return n; }
    int numResiduals() const { return m; }
public:
  void debugDumpResiduals() const {
    std::cerr << "DEBUG dump residuals (m=" << m << "):\n";
    for (int i = 0; i < (int)residualExprs.size(); ++i) {
      std::cerr << " residual["<<i<<"] = ";
      if (residualExprs[i]) residualExprs[i]->dump(std::cerr, 2);
      else std::cerr << "<null>\n";
    }
  }

private:
    SymbolTable &symtab;
    std::vector<std::shared_ptr<AnalogAssign>> assigns;


    std::vector<ExprPtr> residualExprs;
    std::vector<int> indIndices;
    std::vector<int> symToVarIndex;

    // CppAD function (tape)
    CppAD::ADFun<double> f;
    bool tapeValid = false;

    int n = 0; //indep vars
    int m = 0; //residuals

    // helper
    void constructResidualExprs();

    // build the tape (uses zero prev-values & zero initial x for recording; later evaluate numerically)
    void buildTape();

    // allow evaluator to call into these private members (declared in cpp)
    template<typename T>
    T evalExpr(const ExprPtr &e, const std::vector<T> &ax, const std::vector<int> &symToVar, const std::vector<double> &prevValues, double dt);
private:
    struct ResidualConstructionState {
        std::unordered_map<std::string, std::pair<std::string, std::string>> branchMap;
        std::unordered_map<std::string, ExprPtr> nodeResidualsMap;
        std::vector<ExprPtr> fallbackResiduals;
        std::unordered_set<std::string> neededBranches;
        std::unordered_set<std::string> eliminatedBranches;
        std::unordered_map<std::string, ExprPtr> pendingBranchResiduals;
        std::vector<ExprPtr> lhs_transformed;
        std::vector<ExprPtr> rhs_transformed;
    };

    class BranchAnalyser {
    private:
        const std::unordered_map<std::string, std::pair<std::string, std::string>>& branchMap_;
        
    public:
        BranchAnalyser(const std::unordered_map<std::string, std::pair<std::string, std::string>>& branchMap) 
            : branchMap_(branchMap) {}
        
        bool isBranchIdentifier(const ExprPtr& e, const std::string& targetA = "", const std::string& targetB = "") const;
        std::string getBranchName(const std::string& a, const std::string& b) const;
        void collectBranchIdentifiers(const ExprPtr& e, std::unordered_set<std::string>& found) const;
    };

    //helpers
    void normaliseAssignments(ResidualConstructionState& state);
    bool processAssignment(size_t index, ResidualConstructionState& state);
    bool processVNodePattern(const ExprPtr& L, const ExprPtr& R, ResidualConstructionState& state);
    bool processVNodesPattern(const ExprPtr& L, const ExprPtr& R, ResidualConstructionState& state);
    bool processResistorLikePattern(const ExprPtr& L, const ExprPtr& R, const std::string& nameA, const std::string& nameB, ResidualConstructionState& state);
    bool processGenericBranchPattern(const ExprPtr& L, const ExprPtr& R, const std::string& nameA, const std::string& nameB, ResidualConstructionState& state);
    void processFallbackResidual(const ExprPtr& L, const ExprPtr& R, ResidualConstructionState& state);
    void collectNeededBranches(ResidualConstructionState& state);
    void buildFinalResidualVector(ResidualConstructionState& state);
    
    //utility
    ExprPtr makeNumber(double value) const;
    ExprPtr negateExpr(const ExprPtr& expr) const;
    void addToNodeResidual(const std::string& nodeName, const ExprPtr& term, ResidualConstructionState& state);
    bool referencesHandledBranches(const ExprPtr& expr, const ResidualConstructionState& state) const;
};
