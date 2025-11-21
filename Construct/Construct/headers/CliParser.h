#pragma once

/*
Provides a CLI options class which parses command line arguments.
*/

class CliOptions{

	char* __rootScriptPath;
	char* __outputPath;

public:
	
};

CliOptions parseCliOptions(int argc, char** argv);
