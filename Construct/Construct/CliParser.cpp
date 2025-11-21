#include "CliParser.h"
#include "Error.h"

#include <string>

// Auxiliary Methods

void printHelp(){

	printf("Usage: construct [options]\n");

}

// Primary Methods

void parseDOption(char* arg, CliOptions& options) {

}

void parseSOption(char arg, CliOptions& options){

	switch (arg)
	{
	case 'h': printHelp(); break;

	default:
		std::string msg = "Unknown option: ";
		msg += arg;
		ErrHandle::logError(ERR_CLI_UNKNOWN_OPTION, msg.c_str());
	}

}

CliOptions parseCliOptions(int argc, char ** argv)
{
	CliOptions options;

	for (int i = 1; i < argc; ++i){
		size_t len = strlen(argv[i]);

		if (len > 2 && argv[i][0] == '-' && argv[i][1] == '-') {
			parseDOption(argv[i] + 2, options);
		}
		else if (len == 2 && argv[i][0] == '-') {
			parseSOption(argv[i][1], options);
		}
		else {
			std::string msg = "Unknown argument: ";
			msg += argv[i];
			ErrHandle::logError(ERR_CLI_UNKNOWN_OPTION, msg.c_str());
		}
	}

	return options;
}