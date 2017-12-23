#include "element.h"

using namespace std;

Element::Element()
{
	this->color = RED;
}

Element::Element(char color)
{
	if(color == RED		||
	   color == BLUE	||
	   color == YELLOW	||
	   color == GREEN	||
	   color == PURPLE	||
	   color == ORANGE)
		this->color = color;
	else
		this->color = RED;
}

char Element::getColor() const
{
	return color;
}

string Element::toString()
{
	return string(1, color);
}
