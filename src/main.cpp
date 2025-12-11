#include <iostream>
#include "verilog_a_parser.h"
using AD = CppAD::AD<double>;

int toy(){
    std::string fileName = "tests/test1.va"; //verilog-a file
    VerilogAParser parser; //Create the parser object
    if (!parser.parseFile(fileName)) { //Parse the verilog file
        std::cerr << "Failed to parse file: " << parser.getErrorMessage() << std::endl;
        return 1;
    }
    for (const auto& moduleName : parser.getModuleNames()) {//Process each module (typically there is one module per file but this allows for multiple)
        std::unordered_map<std::string, double> userInitials, userFixed, userPast;//Create userInitials and userFixed to populate jacobian. userPast for ddt
        std::vector<std::string> ports = parser.getPorts(moduleName);//Get the ports of the module
        // for(auto& port: ports) {//In this example i am setting all ports as "unknowns" with an initial value of 0
        //     userInitials[port] = 0;
        // // }
        // userInitials["d"] = 0.4;
        // userInitials["g"] = 1.2;
        // userInitials["s"] = 0;
        // userInitials["b"] = 0;
        userInitials["a"] = 30;
        userInitials["b"] = 10;
        userInitials["I(a,b)"] = 1.0;
        userPast["a"] = 11;
        userPast["b"] = 1;
        userPast["I(a,b)"] = 1.0;
        parser.setUserInitials(userInitials);//Set initial values for ports, done here
        parser.setUserFixed(userFixed);//    as this allows for conditionals to be used
        parser.setUserInitialsPast(userPast);
        parser.buildSymbolTableAndJacobianForModule(moduleName);// build the jacobian and symbol table
        std::vector<double> residuals, jacobian_flat; std::vector<std::string> unknowns;
        if (!parser.evaluateModuleWithoutBranchCurrents(moduleName, residuals, jacobian_flat, unknowns)) {//evaluate modual
            std::cerr << "Failed to evaluate module " << moduleName << ": " << parser.getErrorMessage() << std::endl;
        }




        // Prints to show
        for(auto& port : ports){
            std::cout << "Port: " << port << std::endl;
        }
        for(auto& unknown : unknowns){
            std::cout << "Unknowns: " << unknown << std::endl;
        }
        std::cout << "===== Jacobian ===== \n   ";
        for(auto& port : ports){
            std::cout << port << "   ";
        }
        for (size_t i = 0; i < jacobian_flat.size(); ++i) {//print jacobian 
            if(i % unknowns.size() == 0){std::cout << "\n" << unknowns[floor(i/unknowns.size())] <<" ";}
            std::cout <<jacobian_flat[i] << "   ";
        }
        std::cout << "\n";
        std::cout << "===== Residuals =====" << std::endl;
        for(auto& residual : residuals){
            std::cout << "residual: " << residual << std::endl;
        }

    }
    
    return 1;
}
int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: vlgc <test.v> [--init=name=val,name2=val2,...] [--fixed=name=val,name2=val2,...]\n";
        return 1;
    }
    return toy();
    //parse command line arguments
    std::unordered_map<std::string, double> userInitials;//Create userInitials and userFixed to populate jacobian
    std::unordered_map<std::string, double> userFixed;
    std::unordered_map<std::string, double> userPast;
    const std::string initPrefix = "--init=";
    const std::string fixedPrefix = "--fixed=";
    for (int i = 1; i < argc; ++i) {
        std::string a = argv[i];
        if (a.rfind(initPrefix, 0) == 0) {
            //parse initials (initial guesses for unknowns)
            std::string list = a.substr(initPrefix.size());
            std::stringstream ss(list);
            std::string token;
            while (std::getline(ss, token, ',')) {
                auto eq = token.find('=');
                if (eq != std::string::npos) {
                    std::string name = token.substr(0, eq);
                    std::string sval = token.substr(eq + 1);
                    //trim whitespace
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
        else if (a.rfind(fixedPrefix, 0) == 0) {
            //parse fixed values (constants)
            std::string list = a.substr(fixedPrefix.size());
            std::stringstream ss(list);
            std::string token;
            while (std::getline(ss, token, ',')) {
                auto eq = token.find('=');
                if (eq != std::string::npos) {
                    std::string name = token.substr(0, eq);
                    std::string sval = token.substr(eq + 1);
                    //trim whitespace
                    name.erase(0, name.find_first_not_of(" \t\n\r"));
                    name.erase(name.find_last_not_of(" \t\n\r") + 1);
                    sval.erase(0, sval.find_first_not_of(" \t\n\r"));
                    sval.erase(sval.find_last_not_of(" \t\n\r") + 1);
                    
                    try {
                        double v = std::stod(sval);
                        if (!name.empty()) userFixed[name] = v;
                    } catch(...) {
                        std::cerr << "Warning: cannot parse fixed value '" << sval << "' for '" << name << "'\n";
                    }
                }
            }
        }
    }




    VerilogAParser parser;
    if (!parser.parseFile(argv[1])) {
        std::cerr << "Failed to parse file: " << parser.getErrorMessage() << std::endl;
        return 1;
    }
    parser.printAST();//print the ast
    for (const auto& moduleName : parser.getModuleNames()) {//Process each module
        std::vector<std::string> ports = parser.getPorts(moduleName);//Get the ports of the module
        for(auto& port : ports){
            std::cout << "Port: " << port << std::endl;
        }
        //userInitials["I(a,src)"]= 0.099;
        //userInitials["I(src,b)"]= 0.099;
        //userInitials["I(a,b)"]= -1.2e-05;
        userInitials["a"] = 10;
        userInitials["b"] = 0;
        userInitials["I(a,b)"] = 1.0;
        userPast["a"] = 0;
        userPast["b"] = 0;
        userPast["I(a,b)"] = 1.0;
        parser.setUserInitials(userInitials);//Set initial values for ports, done here
        parser.setUserFixed(userFixed);//    as this allows for conditionals to be used
        parser.setUserInitialsPast(userPast);
        parser.buildSymbolTableAndJacobianForModule(moduleName);// build the jacobian and symbol table
        std::vector<double> residuals;
        std::vector<double> jacobian_flat;
        std::vector<double> x_current;
        std::vector<double> x_past;
        parser.make_X_vector(moduleName, x_current, x_past);
        for(auto& i : x_current){
            std::cout << i << std::endl;
        }
        if (!parser.evaluateModule(x_current, moduleName, residuals, jacobian_flat)) {//evaluate modual
            std::cerr << "Failed to evaluate module " << moduleName << ": " << parser.getErrorMessage() << std::endl;
        }
        auto jacobian_builder = parser.getJacobianBuilder(moduleName);//run builder


        if (jacobian_builder) {
             std::cout << "Module '" << moduleName << "' produced m=" << jacobian_builder->numResiduals()
                        << " residuals and n=" << jacobian_builder->numUnknowns() << " unknowns\n";
            std::cout << "y.size()=" << residuals.size() << " Jflat.size()=" << jacobian_flat.size() << "\n";
                
            for (size_t i = 0; i < residuals.size(); ++i) {//print resudals
                std::cout << "y[" << i << "] = " << residuals[i] << "\n";
            }
                
            size_t maxPrint = std::min<size_t>(jacobian_flat.size(), 20);
            for (size_t i = 0; i < jacobian_flat.size(); ++i) {//print jacobian flat
                std::cout << "Jflat[" << i << "]=" << jacobian_flat[i] << " ";
            }
            std::cout << "\n\n";
            for (size_t i = 0; i < jacobian_flat.size(); ++i) {//print jacobian 
                if(i % jacobian_builder->numResiduals() ==0){std::cout << "\n";}
                std::cout <<jacobian_flat[i] << "   ";
            }
            std::cout << "\n\n";
            parser.printSymbolTable(moduleName, std::cout);//print symbol table
        }
    }
    
    return 0;
}