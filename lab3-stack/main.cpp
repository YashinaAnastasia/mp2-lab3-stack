#include <string>
#include <iostream>
#include "Stack.h"
#include "Calculator.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	
	string ex;
	TCalculator cal;
	cout << "-------------------" << endl;
	cout << "Калькулятор" << endl;
	ex = "cos(0)";
	cal.SetExpr(ex);
	cal.ToPostfix();
	cal.CalcPostfix();
	cout<<cal.Calc();
	cout << endl;



}

