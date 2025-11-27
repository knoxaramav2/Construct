#pragma once

#include <string>
#include <vector>

namespace ConUtils {
	std::vector<const char*> split(char delim, const char* string);
	std::vector<const char*> split(const char* delims, const char* string);
}

