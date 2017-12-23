#ifndef __CODE_H_INCLUDED__
#define __CODE_H_INCLUDED__

#include "element.h"
#include <vector>

class Code
{
public:
	Code();
	Code(std::vector<Element> elements);
	Code(std::string co);

	std::string toString();

	std::string validate(std::string oth);
	std::string validate(std::vector<Element> oth);
	std::string validate(Code oth);

	bool codeMatch(std::string oth) const;
	bool codeMatch(std::vector<Element> oth) const;
	bool codeMatch(Code oth) const;

	friend bool operator== (const Code& lhs, const Code& rhs)
	{
		return lhs.codeMatch(rhs);
	}
private:
	std::vector<Element> parseCode(std::string co);

	std::vector<Element> elements;
};

#endif // __CODE_H_INCLUDED__
