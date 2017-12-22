#include "personList.h"
#include <sstream>
#include <algorithm>

using namespace std;

PersonList::PersonList()
{
	this->list = std::vector<Person>();
}

void PersonList::addPerson(Person p)
{
	list.push_back(p);
	sort(list.begin(),list.end());
}

void PersonList::addPerson(string name, int pancakes)
{
	Person p = Person(name, pancakes);
	list.push_back(p);
	sort(list.begin(),list.end());
}

string PersonList::toString()
{
	stringstream convert;

	for(int i = 0; i < list.size(); i++)
	{
		convert << list.at(i).toString() << "\n";
	}

	return convert.str();
}
