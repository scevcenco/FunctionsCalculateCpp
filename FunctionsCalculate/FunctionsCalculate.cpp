// FunctionsCalculate.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

double Adding(double a, double b)
{
	return a + b;
}

double Subtrction(double a, double b)
{
	return a - b;
}

double Multiplication(double a, double b)
{
	return a*b;
}
double Division(double a, double b)
{
	if (b == 0) cout << "Error, do not input 0! Try again!" << "\n";
	return a / b;
}
void main()
{
	double a, b, result;
	int action;
	char c;
	cout << "Press any key to begin ore press 'e' to exit.\n";
	while ((c = _getch()) != 'e')
	{
		cout << "Input values:" << endl;
		cin >> a >> b;
		cout << "a=" << a << ", b=" << b << endl;
		cout << "What do you want to do? 1 is +, 2 is -, 3 is *, 4 is /" << endl;
		cin >> action;
		switch (action)
		{
		case 1: result = Adding(a, b); break;
		case 2: result = Subtrction(a, b); break;
		case 3: result = Multiplication(a, b); break;
		case 4: result = Division(a, b); break;
		default: cout << "No such action, sorry! Try again" << endl;
		}
		cout << "The result is " << result << endl;
	}
	_getch();
}



