#pragma once
#include <string>
#include <vector>
#include <unordered_map>
#include <optional>
#include <stdexcept>

struct Symbol {
    std::string name;
    double value = 0.0;         // parameter or last-known numeric value
    double pastValue = 0.0;
    bool isIndependent = false; // whether this symbol is part of solver unknowns

    bool hasInitial = false;       // true if an initial value exists for this symbol
    double initialValue = 0.0;     // the initial value
    bool initialFromUser = false;  // true if initial came from user / simulator runtime
    bool initialFromSource = false;// true if initial came from source/AST
    bool isFixed = false;
};

class SymbolTable {
public:
    SymbolTable() = default;
    void debugPrint(const std::string& label = "") const {
        std::cout << "SYMBOL TABLE DEBUG" << label << " ===" << std::endl;
        for (int i = 0; i < (int)symbols.size(); ++i) {
            const Symbol& s = symbols[i];
            std::cout << "  [" << i << "] " << s.name 
                      << " indep=" << s.isIndependent
                      << " fixed=" << s.isFixed
                      << " value=" << s.value
                      << " userInit=" << s.initialFromUser
                      << " initValue=" << s.initialValue << std::endl;
        }
        std::cout << "Independent indices: ";
        auto indeps = independentIndices();
        for (int idx : indeps) {
            std::cout << symbols[idx].name << " ";
        }
        std::cout << std::endl;
    }
    // add symbol or return existing index
    int addSymbol(const std::string &name, bool independent=false, double value=0.0, double past =0.0) {
        auto it = nameToIndex.find(name);
        if (it != nameToIndex.end()) return it->second;
        int idx = (int)symbols.size();
        Symbol s;
        s.name = name;
        s.value = value;
        s.pastValue = past;
        s.isIndependent = independent;
        symbols.push_back(std::move(s));
        nameToIndex[name] = idx;
        return idx;
    }

    // find symbol index; returns -1 if not present
    int find(const std::string &name) const {
        auto it = nameToIndex.find(name);
        return (it == nameToIndex.end()) ? -1 : it->second;
    }

    // Set fixed flag for a symbol
    void setFixed(int idx, bool fixed) {
        if (idx < 0 || idx >= (int)symbols.size()) return;
        symbols[idx].isFixed = fixed;
        if (fixed) {
            symbols[idx].isIndependent = false;  // Fixed nodes are not solved
        }
    }
    
    void setFixed(const std::string &name, bool fixed) {
        int idx = find(name);
        if (idx >= 0) setFixed(idx, fixed);
    }

    // Check if symbol is fixed
    bool isFixed(int idx) const {
        if (idx < 0 || idx >= (int)symbols.size()) return false;
        return symbols[idx].isFixed;
    }
    
    bool isFixed(const std::string &name) const {
        int idx = find(name);
        return (idx >= 0) ? symbols[idx].isFixed : false;
    }

    // getters / setters
    Symbol& operator[](int idx) {
        if (idx < 0 || idx >= (int)symbols.size()) throw std::out_of_range("SymbolTable: index out of range");
        return symbols[idx];
    }
    const Symbol& operator[](int idx) const {
        if (idx < 0 || idx >= (int)symbols.size()) throw std::out_of_range("SymbolTable: index out of range");
        return symbols[idx];
    }
    int size() const { return (int)symbols.size(); }

    // list of independent indices in stable order (EXCLUDES FIXED NODES)
    std::vector<int> independentIndices() const {
        std::vector<int> out;
        out.reserve(symbols.size());
        for (int i = 0; i < (int)symbols.size(); ++i) {
            if (symbols[i].isIndependent && !symbols[i].isFixed) {
                out.push_back(i);
            }
        }
        return out;
    }

    // convenience: set numeric value
    void setValue(int idx, double v) {
        if (idx < 0 || idx >= (int)symbols.size()) return;
        symbols[idx].value = v;
    }
    void setValue(const std::string &name, double v) {
        int idx = find(name);
        if (idx >= 0) symbols[idx].value = v;
    }

    void setValuePast(int idx, double v) {
        if (idx < 0 || idx >= (int)symbols.size()) return;
        symbols[idx].pastValue = v;
    }
    void setValuePast(const std::string &name, double v) {
        int idx = find(name);
        if (idx >= 0) symbols[idx].pastValue = v;
    }

    // initial-value helpers
    // set initial by index
    void setInitialValue(int idx, double v, bool fromUser=false, bool fromSource=false) {
        if (idx < 0 || idx >= (int)symbols.size()) return;
        symbols[idx].hasInitial = true;
        symbols[idx].initialValue = v;
        symbols[idx].initialFromUser  = fromUser;
        symbols[idx].initialFromSource = fromSource;
    }
    // set initial by name (will add symbol if it doesn't exist)
    void setInitialValue(const std::string &name, double v, bool fromUser=false, bool fromSource=false) {
        int idx = find(name);
        if (idx < 0) idx = addSymbol(name, /*independent=*/true, 0.0);
        setInitialValue(idx, v, fromUser, fromSource);
    }

    bool hasInitial(int idx) const {
        if (idx < 0 || idx >= (int)symbols.size()) return false;
        return symbols[idx].hasInitial;
    }
    bool hasInitial(const std::string &name) const {
        int idx = find(name);
        return (idx >= 0) ? symbols[idx].hasInitial : false;
    }

    double getInitialValue(int idx) const {
        if (idx < 0 || idx >= (int)symbols.size()) return 0.0;
        return symbols[idx].initialValue;
    }
    double getInitialValue(const std::string &name) const {
        int idx = find(name);
        return (idx >= 0) ? symbols[idx].initialValue : 0.0;
    }

    bool isInitialFromUser(int idx) const {
        if (idx < 0 || idx >= (int)symbols.size()) return false;
        return symbols[idx].initialFromUser;
    }
    bool isInitialFromUser(const std::string &name) const {
        int idx = find(name);
        return (idx >= 0) ? symbols[idx].initialFromUser : false;
    }

    bool isInitialFromSource(int idx) const {
        if (idx < 0 || idx >= (int)symbols.size()) return false;
        return symbols[idx].initialFromSource;
    }
    bool isInitialFromSource(const std::string &name) const {
        int idx = find(name);
        return (idx >= 0) ? symbols[idx].initialFromSource : false;
    }

    // convenience: flip/set independent on an existing symbol (useful if you want to mark nets later)
    void setIndependent(const std::string &name, bool independent=true) {
        int idx = find(name);
        if (idx >= 0) symbols[idx].isIndependent = independent;
    }
    void setIndependent(int idx, bool independent=true) {
        if (idx < 0 || idx >= (int)symbols.size()) return;
        symbols[idx].isIndependent = independent;
    }

    // convenience: get symbol name by index
    std::string symbolName(int idx) const {
        if (idx < 0 || idx >= (int)symbols.size()) return std::string();
        return symbols[idx].name;
    }

private:
    std::vector<Symbol> symbols;
    std::unordered_map<std::string,int> nameToIndex;
};