#ifndef __PERSON_H_INCLUDED__
#define __PERSON_H_INCLUDED__

#include <string>

class Person
{
public:
	Person();
	Person(std::string name, int pancakes);

	std::string toString();

	int getPancakes() const;

	//So the list is ordered descending
	friend bool operator< (const Person& lhs, const Person& rhs)
	{
       		return lhs.getPancakes() > rhs.getPancakes();
	}


private:
	std::string name;
	int pancakes;
};


#endif // __PERSON_H_INCLUDED__
