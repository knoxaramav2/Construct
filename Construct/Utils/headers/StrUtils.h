#pragma once

#include <string>
#include <vector>

namespace ConUtils {
    std::string frmstr(const char* f_str, ...);
    std::string toLower(std::string value);
    std::string toUpper(std::string value);
    bool strEquals(std::string lstr, std::string rstr, bool ignoreCase = false);
    std::vector<std::string> split(std::string text, const char* delim);
}