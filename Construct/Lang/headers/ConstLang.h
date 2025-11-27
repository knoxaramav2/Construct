#pragma once

#include "Token.h"
#include <vector>
#include <string>

namespace constr {

	std::vector<LToken> tokenize_file(std::string path);

};
