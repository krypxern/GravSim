#include "refresher.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		std::cout << "Correct format is: ./main <num>\n";
		return 1;
	}

	double num = strtod(argv[1], NULL);

	std::cout << Refresher::bab(num) << "\n";
}
