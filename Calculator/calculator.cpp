#include "calculator.h"

//Input/Output
void Calculator::setRegA(double a)
{
	regA = a; 
}

void Calculator::setRegB(double b)
{
	regB = b;
}

double Calculator::getAnswer()
{
	return regA;
}


//Basic Operations
void Calculator::add()
{
	regA = regA + regB;
}

void Calculator::subtract()
{
	regA = regA - regB;
}

void Calculator::multiply()
{
	regA = regA * regB;
}

void Calculator::divide()
{
	regA = regA / regB;
}


//Secondary Operations
void Calculator::square()
{
	regA = regA * regA;
}

void Calculator::sqrt()
{
	regA = babylonian(regA, regA / 2);
}


//Assistive/Helper Functions
double Calculator::babylonian(double num, double guess)
{
	if(num < 0)
	{
		return 0;
	}
	else if(num == 0)
	{
		return 0;
	}
	else
	{
		double newGuess = (guess + num / guess) / 2;
		
		if(0.99999 * guess < newGuess && newGuess < 1.00001 * guess)
		{
			return newGuess;
		}
		else
		{
			return babylonian(num, newGuess);
		}
	}
}
