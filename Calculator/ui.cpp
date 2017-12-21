#include "ui.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

UI::UI()
{
	cal = new Calculator();
}

void UI::run()
{
	std::cout << "Welcome:\n";

	bool check = true;
	while(check)
	{
		//std::cout << "\nBefore Input\n";

		string input;
		std::cin >> input;

		//std::cout << "\nAfter Input\n";

		bool parseCorrect = parseInput(input);

		if(parseCorrect)
		{
			std::cout << cal->getAnswer() << "\n";
		}
		else if(input == "q")
		{
			std::cout << "\nGoodbye\n";
			check = false;
		}
	}
}

bool UI::parseInput(string input)
{

	//std::cout << "\nBefore Find\n";

	int add = input.find("+") + 1;
	int sub = input.find("-") + 1;
	int mul = input.find("*") + 1;
	int div = input.find("/") + 1;

	int sqr = input.find("^2") + 1;
	int srt = input.find("^0.5") + 1;

	//std::cout << "\nAfter Find\n";

	if(add || sub || mul || div)
	{

		//std::cout << "\nBefore substring\n";

		int oper = add + sub + mul + div;

		//std::cout << "\nOper: " << oper << "\n";

		string str1 = input.substr(0,oper - 1);
		string str2 = input.substr(oper);

		//std::cout << "\nAfter substring\n";

		double a = strtod(str1.data(), NULL);
		double b = strtod(str2.data(), NULL);

		//Double check that conversion didn't fail
		bool cc = str1.find("0") > -1 &&  str2.find("0") > -1;

		//If conversion failed
		if(!((a == 0 && b == 0 && cc) || a != 0 && b != 0))
		{
			return false;
		}
		
		//If conversion succeeded
		cal->setRegA(a);
		cal->setRegB(b);
		if(add)
			cal->add();
		else if(sub)
			cal->subtract();
		else if(mul)
			cal->multiply();
		else if(div)
			cal->divide();
		else
			return false;
	}
	else if(sqr || srt)
	{
		int oper = sqr + srt;

		string str1 = input.substr(0,oper-1);
		
		double a = strtod(str1.data(), NULL);

		//Double check that conversion didn't fail
		double cc = str1.find("0") > -1;

		//If conversion failed
		if(!((a == 0 && cc) || a != 0))
		{
			return false;
		}

		//If conversion succeeded
		cal->setRegA(a);
		if(sqr)
			cal->square();
		else if(srt)
			cal->sqrt();
		else
			return false;
	}
	else
	{
		return false;
	}

	//Parse Successful
	return true;
}
