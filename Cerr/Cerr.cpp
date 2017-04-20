// Cerr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

double myFunction(double x, double y);

int main()
{
	double testD1 = 0;
	double testD2 = 0;

	std::cout << "Type TWO numbers: ";
	std::cout << "Type 1st number: ";
	std::cin >> testD1;
	std::cout << "Type 2nd number: ";
	std::cin>> testD2;

	std::cerr << testD1 << "\t" << testD2 << std::endl;

	double func = myFunction(testD1, testD2);

	std::cout << func;


	system("pause");
    return 0;
}

double myFunction(double x, double y)
{
	double result;
	result = (x*x) / y;
	std::cerr << x << "\t" << y << "\t" << result << std::endl;
	return result;

}
