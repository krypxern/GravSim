#include "code.h"
#include <sstream>

using namespace std;

Code::Code()
{
	size = CODESIZE;

	this->elements = vector<Element>();

	//Fill with default elements
	for(int i = 0; i < size; i++)
	{
		this->elements.push_back(Element());
	}
}

Code::Code(vector<Element> elements)
{
	size = CODESIZE;

	if(CODESIZE == elements.size())
	{
		this->elements = elements;
	}
	else
	{
		Code();
	}
}

Code::Code(string co)
{
	size = CODESIZE;

	if(CODESIZE == co.length())
	{
		this->elements = parseCode(co);
	}
	else
	{
		Code();
	}
}

string Code::toString()
{
	stringstream convert = stringstream();

	for(int i = 0; i < size; i++)
	{
		convert << elements.at(i).toString();
	}

	return convert.str();
}

vector<Element> Code::parseCode(string co)
{
	const char* Els = co.c_str();
	vector<Element> elements = vector<Element>();

	for(int i = 0; i < size; i++)
	{
		elements.push_back(Element(Els[i]));
	}
			
	return elements;
}
