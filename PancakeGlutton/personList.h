#ifndef __PERSONLIST_H_INCLUDED__
#define __PERSONLIST_H_INCLUDED__

#include "person.h"
#include <vector>

class PersonList
{
public:
	PersonList();

	void addPerson(Person p);
	void addPerson(std::string name, int pancake);

	std::string toString();
private:
	std::vector<Person> list;
};

#endif // __PERSONLIST_H_INCLUDED__
