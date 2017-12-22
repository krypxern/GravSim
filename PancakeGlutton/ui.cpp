#include "ui.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void UI::run()
{
	pList = PersonList();

	cout << "Welcome to the pancake contest recorder!\n";
	cout << "How many people had pancakes today?\n";

	string s = "";
	cin >> s;
	personNumber = stoi(s);
	
	cout << "Alright, now let's find out what those scores were.\n\n";

	for(int i = 0; i < personNumber; i++)
	{
		addPerson();
	}

	cout << "Alright. Let's repeat that back.\n";
	cout << pList.toString();
}

void UI::addPerson()
{
	pList.addPerson(getName(), getPancakes());
}

std::string UI::getName()
{
	string s = "";
	cin >> s;
	return s;
}

int UI::getPancakes()
{
	string s = "";
	cin >> s;
	return stoi(s);
}
