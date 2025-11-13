#include <iostream>
#include "verilog_a_parser.h"

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: vlgc <test.v> [--init=name=val,name2=val2,...]\n";
        return 1;
    }
    
    // Parse command line arguments
    std::unordered_map<std::string, double> userInitials;
    const std::string initPrefix = "--init=";
    
    for (int ai = 1; ai < argc; ++ai) {
        std::string a = argv[ai];
        if (a.rfind(initPrefix, 0) == 0) {
            // Parse initials (same as before)
            std::string list = a.substr(initPrefix.size());
            std::stringstream ss(list);
            std::string token;
            while (std::getline(ss, token, ',')) {
                auto eq = token.find('=');
                if (eq != std::string::npos) {
                    std::string name = token.substr(0, eq);
                    std::string sval = token.substr(eq + 1);
                    // trim whitespace
                    name.erase(0, name.find_first_not_of(" \t\n\r"));
                    name.erase(name.find_last_not_of(" \t\n\r") + 1);
                    sval.erase(0, sval.find_first_not_of(" \t\n\r"));
                    sval.erase(sval.find_last_not_of(" \t\n\r") + 1);
                    
                    try {
                        double v = std::stod(sval);
                        if (!name.empty()) userInitials[name] = v;
                    } catch(...) {
                        std::cerr << "Warning: cannot parse init value '" << sval << "' for '" << name << "'\n";
                    }
                }
            }
        }
    }
    
    // Use the parser class
    VerilogAParser parser;
    parser.setUserInitials(userInitials);
    
    if (!parser.parseFile(argv[1])) {
        std::cerr << "Failed to parse file: " << parser.getErrorMessage() << std::endl;
        return 1;
    }
    parser.printAST();//print the ast
    for (const auto& moduleName : parser.getModuleNames()) {//Process each module
        std::cout << "Processing module: " << moduleName << std::endl;
        
        std::vector<double> residuals;
        std::vector<double> jacobian_flat;
        
        if (parser.evaluateModule(moduleName, residuals, jacobian_flat)) {//Process module by name
            auto jacobian_builder = parser.getJacobianBuilder(moduleName);//run builder
            if (jacobian_builder) {
                std::cout << "Module '" << moduleName << "' produced m=" << jacobian_builder->numResiduals()
                          << " residuals and n=" << jacobian_builder->numUnknowns() << " unknowns\n";
                std::cout << "y.size()=" << residuals.size() << " Jflat.size()=" << jacobian_flat.size() << "\n";
                
                for (size_t i = 0; i < residuals.size(); ++i) {//print resudals
                    std::cout << "y[" << i << "] = " << residuals[i] << "\n";
                }
                
                size_t maxPrint = std::min<size_t>(jacobian_flat.size(), 20);
                for (size_t i = 0; i < maxPrint; ++i) {//print jacobian flat
                    std::cout << "Jflat[" << i << "]=" << jacobian_flat[i] << " ";
                }
                std::cout << "\n\n";
                
                parser.printSymbolTable(moduleName, std::cout);//print symbol table
            }
        } else {
            std::cerr << "Failed to evaluate module " << moduleName << ": " 
                      << parser.getErrorMessage() << std::endl;
        }
    }
    
    return 0;
}