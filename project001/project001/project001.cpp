// project001.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[])
{
	double x = 0;
	double y = 0;
	std::cout << "Enter -0.4<x<0.4:\n";
	std::cin >> x;
	std::cout << "Enter y:\n";
	std::cin >> y;

	std::cout << "exp(y)+cos(5*x)+4*pow(x,2)/arcsin(3*x) = " << exp(y) + cos(5 * x) + 4 * pow(x, 2) / asin(3 * x) << "\n";

	system("pause");
	return 0;
}