#include "code.h"

using namespace std;

Code::Code()
{
	this->elements = vector<Element>();
	size = CODESIZE;

	//Fill with default elements
	for(int i = 0; i < size; i++)
	{
		this->elements.push_back(Element());
	}
}

Code::Code(vector<Element> elements)
{
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
	if(CODESIZE == co.size())
	{
		this->elements = parseCode(co);
	}
	else
	{
		Code();
	}
}

vector<Element> Code::parseCode(string co)
{
	//Placeholder
	return vector<Element>();
}
