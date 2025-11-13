#include "Preprocessor.h"
#include <sstream>
#include <fstream>
#include <iostream>
#include <regex>
#include <filesystem>

namespace fs = std::filesystem;

Preprocessor::Preprocessor(const std::string &baseDir) : baseDir_(baseDir) {
}

std::string Preprocessor::processString(const std::string &src, const std::string &filename) {
    std::set<std::string> included;
    if (!filename.empty()) {
        std::string path = filename;
        // if filename is relative, use baseDir_
        if (!fs::path(path).is_absolute() && !baseDir_.empty()) {
            path = joinPath(baseDir_, filename);
        }
        return processFile(path, included);
    } else {
        // process in-memory string using baseDir_
        return processLines(src, baseDir_.empty() ? "." : baseDir_, included);
    }
}

std::string Preprocessor::processFile(const std::string &path, std::set<std::string> &included) {
    std::string canonical;
    try {
        canonical = fs::canonical(path).string();
    } catch(...) {
        // fallback to given path
        canonical = path;
    }
    if (included.count(canonical)) {
        // already included -> avoid recursion
        return std::string();
    }
    included.insert(canonical);

    std::ifstream ifs(canonical);
    if (!ifs) {
        std::cerr << "Preprocessor: cannot open include file: " << canonical << "\n";
        return std::string();
    }
    std::ostringstream ss;
    ss << ifs.rdbuf();
    std::string content = ss.str();
    std::string curDir = dirname(canonical);
    return processLines(content, curDir, included);
}

static bool starts_with(const std::string &s, const std::string &p) {
    return s.size() >= p.size() && s.compare(0, p.size(), p) == 0;
}

std::string Preprocessor::processLines(const std::string &text, const std::string &curDir, std::set<std::string> &included) {
    std::istringstream iss(text);
    std::string line;
    std::ostringstream out;

    enum IfState { INCLUDE, EXCLUDE };
    std::vector<IfState> ifstack;
    bool current_enabled = true;

    std::regex include_re("^\\s*`include\\s+\"([^\"]+)\"\\s*$");
    std::regex define_re("^\\s*`define\\s+([A-Za-z_][A-Za-z0-9_]*)\\s*(.*)$");
    std::regex ifdef_re("^\\s*`ifdef\\s+([A-Za-z_][A-Za-z0-9_]*)\\s*$");
    std::regex ifndef_re("^\\s*`ifndef\\s+([A-Za-z_][A-Za-z0-9_]*)\\s*$");
    std::regex else_re("^\\s*`else\\s*$");
    std::regex endif_re("^\\s*`endif\\s*$");

    while (std::getline(iss, line)) {
        std::smatch m;
        if (std::regex_match(line, m, include_re)) {
            if (current_enabled) {
                std::string incfile = m[1].str();
                std::string full = joinPath(curDir, incfile);
                out << processFile(full, included);
            }
            continue;
        }
        if (std::regex_match(line, m, define_re)) {
            if (current_enabled) {
                std::string name = m[1].str();
                std::string val = m[2].str();
                // trim
                macros_[name] = trim(val);
            }
            continue;
        }
        if (std::regex_match(line, m, ifdef_re)) {
            std::string name = m[1].str();
            bool ok = macros_.count(name);
            ifstack.push_back(ok ? INCLUDE : EXCLUDE);
            // recompute current_enabled
            current_enabled = true;
            for (auto s : ifstack) if (s == EXCLUDE) { current_enabled = false; break; }
            continue;
        }
        if (std::regex_match(line, m, ifndef_re)) {
            std::string name = m[1].str();
            bool ok = !macros_.count(name);
            ifstack.push_back(ok ? INCLUDE : EXCLUDE);
            current_enabled = true;
            for (auto s : ifstack) if (s == EXCLUDE) { current_enabled = false; break; }
            continue;
        }
        if (std::regex_match(line, m, else_re)) {
            if (ifstack.empty()) continue; // mismatched
            // flip top
            ifstack.back() = (ifstack.back() == INCLUDE) ? EXCLUDE : INCLUDE;
            current_enabled = true; for (auto s : ifstack) if (s == EXCLUDE) { current_enabled = false; break; }
            continue;
        }
        if (std::regex_match(line, m, endif_re)) {
            if (!ifstack.empty()) ifstack.pop_back();
            current_enabled = true; for (auto s : ifstack) if (s == EXCLUDE) { current_enabled = false; break; }
            continue;
        }

        if (!current_enabled) {
            // skip line
            continue;
        }

        // Expand simple macros: replace occurrences of `NAME with value
        std::string outline;
        outline.reserve(line.size());
        for (size_t i = 0; i < line.size(); ++i) {
            if (line[i] == '`') {
                // parse identifier
                size_t j = i + 1;
                while (j < line.size() && (isalnum((unsigned char)line[j]) || line[j] == '_')) ++j;
                std::string key = line.substr(i+1, j-(i+1));
                if (!key.empty() && macros_.count(key)) {
                    outline += macros_[key];
                } else {
                    // leave as-is
                    outline.push_back('`');
                    outline.append(key);
                }
                i = j - 1;
            } else {
                outline.push_back(line[i]);
            }
        }

        out << outline << "\n";
    }

    return out.str();
}

std::string Preprocessor::dirname(const std::string &path) {
    try {
        auto p = fs::path(path);
        if (p.has_parent_path()) return p.parent_path().string();
    } catch(...) {}
    return std::string(".");
}

std::string Preprocessor::joinPath(const std::string &a, const std::string &b) {
    try {
        if (fs::path(b).is_absolute()) return b;
        fs::path pa(a);
        pa /= b;
        return pa.lexically_normal().string();
    } catch(...) {
        return a + "/" + b;
    }
}

std::string Preprocessor::trim(const std::string &s) {
    size_t a = 0;
    while (a < s.size() && isspace((unsigned char)s[a])) ++a;
    size_t b = s.size();
    while (b > a && isspace((unsigned char)s[b-1])) --b;
    return s.substr(a, b-a);
}
