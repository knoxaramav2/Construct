#include "Error.h"

ErrHandle* __inst;

ErrHandle* ErrHandle::getInstance()
{
	return nullptr;
}

void ErrHandle::init()
{
	__inst = new ErrHandle;
}

void ErrHandle::logError(ErrorCode code, const char* message)
{
	if (__inst == nullptr) {
		return;
	}

	__inst->_errorLog.push_back(ErrMessage(code, message));
}

ErrMessage ErrHandle::nextError()
{
	if(__inst == nullptr){
		return ErrMessage(ERR_SYS_COMPONENT_UNINITIALIZED, "Error handler uninitialized");
	}

	if (__inst->_errorLog.size() == 0) {
		return ErrMessage(ERR_OK, "");
	}	

	ErrMessage msg = __inst->_errorLog[0];
	__inst->_errorLog.erase(__inst->_errorLog.begin());
	return msg;
}
