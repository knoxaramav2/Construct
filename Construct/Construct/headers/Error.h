#pragma once

#include <vector>

enum ErrorCode {
	ERR_OK = 0,
	//System 1-99
	ERR_SYS_COMPONENT_UNINITIALIZED = 1,
	// CLI 100-199
	ERR_CLI_INVALID_ARGUMENT = 100,
	ERR_CLI_MISSING_ARGUMENT = 101,
	ERR_CLI_UNKNOWN_OPTION = 102,

};

struct ErrMessage{
	ErrorCode errCode;
	const char* message;

	ErrMessage(ErrorCode c, const char* msg)
		: errCode(c), message(msg) {}
};

class ErrHandle{
	
	std::vector<ErrMessage> _errorLog;

public:

	static ErrHandle* getInstance();
	
	static void init();
	static void logError(ErrorCode code, const char* message);
	static ErrMessage nextError();
};
