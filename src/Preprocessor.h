#ifndef PREPROCESSOR_H
#define PREPROCESSOR_H

#include <string>
#include <unordered_map>
#include <set>

class Preprocessor {
public:
    explicit Preprocessor(const std::string &baseDir = "");
    std::string processString(const std::string &src, const std::string &filename = "");//?

private:
    std::unordered_map<std::string, std::string> macros_;
    std::string baseDir_;

    std::string processFile(const std::string &path, std::set<std::string> &included);
    std::string processLines(const std::string &text, const std::string &curDir, std::set<std::string> &included);

    //helpers
    static std::string dirname(const std::string &path);
    static std::string joinPath(const std::string &a, const std::string &b);
    static std::string trim(const std::string &s);
};

#endif

