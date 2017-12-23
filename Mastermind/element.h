#ifndef __ELEMENT_H_INCLUDED__
#define __ELEMENT_H_INCLUDED__

#include <string>

class Element
{
public:
	static const char RED = 'R';
	static const char BLUE = 'B';
	static const char YELLOW = 'Y';
	static const char GREEN = 'G';
	static const char PURPLE = 'P';
	static const char ORANGE = 'O';

	char getColor() const;

	std::string toString();

	friend bool operator== (const Element& lhs, const Element& rhs)
	{
		return lhs.getColor() == rhs.getColor();
	}

	Element();
	Element(char color);

private:

	char color;
};

#endif // __ELEMENT_H_INCLUDED__
