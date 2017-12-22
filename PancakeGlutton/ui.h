#ifndef __UI_H_INCLUDED__
#define __UI_H_INCLUDED__

#include "personList.h"

class UI
{
public:
	void run();
private:
	int personNumber;

	void addPerson();

	std::string getName();
	int getPancakes();

	PersonList pList;
};

#endif //__UI_H_INCLUDED__
