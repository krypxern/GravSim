#include "person.h"
#include <sstream>

using namespace std;

Person::Person()
{
	this->name = "John Doe";
	this->pancakes = 0;
}

Person::Person(string name, int pancakes)
{
	this->name = name;
	this->pancakes = pancakes;
}

string Person::toString()
{
	stringstream convert;

	string s = pancakes == 1 ? " pancake." : " pancakes.";
	convert << name << " ate " << pancakes << s;
	return convert.str();
}

int Person::getPancakes() const
{
	return pancakes;
}
