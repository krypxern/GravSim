#include "refresher.h"

double Refresher::bab(double num)
{
	if(num == 0)
	{
		return 0;
	}
	else if(num < 0)
	{
		return -1;
	}

	double guess = num / 2;

	return babHelper(num, guess);
}

double Refresher::babHelper(double num, double guess)
{
	double newGuess = (guess + num / guess) / 2;
	
	if(0.9999 * guess < newGuess  && newGuess < 1.0001 * guess)
	{
		return newGuess;
	}
	else
	{
		return babHelper(num, newGuess);
	}
}
