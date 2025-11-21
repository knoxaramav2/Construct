// Construct.cpp : Defines the entry point for the application.
//

#include "Construct.h"
#include "CliParser.h"
#include "Error.h"

using namespace std;

static void init(){
	ErrHandle::init();
}

int main(int argc, char** argv)
{
	init();

	CliOptions options = parseCliOptions(argc, argv);

	
	return 0;
}
