#ifndef __CALCULATOR_H_INCLUDED__
#define __CALCULATOR_H_INCLUDED__

class Calculator
{
public:
	void setRegA(double a);
	void setRegB(double b);
	double getAnswer();

	void add();
	void subtract();
	void multiply();
	void divide();

	void square();
	void sqrt();

private:
	double regA;
	double regB;

	double babylonian(double num, double guess);
};

#endif // __CALCULATOR_H_INCLUDED__

