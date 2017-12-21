#ifndef __UI_H_INCLUDED__
#define __UI_H_INCLUDED__

#include <string>
#include "calculator.h"

class UI
{
public:
	UI();
	void run();
private:
	
	Calculator* cal;

	/**
	 If true: Input was properly parsed
	 If false: Input was not properly parsed
	**/
	bool parseInput(std::string input);
};

#endif //__UI_H_INCLUDED__
