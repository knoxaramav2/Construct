#pragma once

#include <string>

/*
Provides a CLI options class which parses command line arguments.
*/

class CliOptions{

	std::string __rootScriptPath;
	std::string __outputPath;

public:
	CliOptions();
};

CliOptions parseCliOptions(int argc, char** argv);
