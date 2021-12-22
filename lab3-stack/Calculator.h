#pragma once
#include <string>
#include <stdlib.h>
#include <iostream>
#include<cmath>
#include "Stack.h"

using namespace std;


class TCalculator
{
	string expr;             
	string postfix;          
	TStack <char> st_c;      
	TStack <double> st_d;     


public:
	TCalculator(string _expr = "1")
	{
		expr = _expr;
	}
	int Priority(char c)
	{
		int p;
		switch (c)
		{
		case '(': p = 0; break;
		case ')': p = 0; break;
		case '+': p = 1; break;
		case '-': p = 1; break;
		case '*': p = 2; break;
		case '/': p = 2; break;
		case '^': p = 3; break;
		case 's': p = 4;break;
		case 'c': p = 4;break;
		case 't': p = 4;break;
		default: p = -1; break;
		}
		return p;
	};
	void ClearStacks()
	{
		st_d.Clear();
		st_c.Clear();
	};
	bool isNumber(char c)
	{
		if (c <= '9' && c >= '0')
		{
			return true;
		}
		else return false;
	}
	bool isOperator(char c)
	{
		if ((c == '+') || (c == '-') || (c == '*') || (c == '/') || (c == '^'))
			return true;
		else
			return false;
	};
	bool isFunction(string input, int start) {
		string func = "";
		int i = start;

		while (input[i] != '(' && (input[i] >= 'a' && input[i] <= 'z')) {
			func += input[i++];
		}

		return func == "cos" || func == "sin" || func == "tan";
	}
	std::string getFunction(string input, int start) {
		string func = "";
		int i = start;
		while (input[i] != '(') {
			func += input[i++];
		}
		return func;
	}
	double CalcPostfix()
	{

		for (int i = 0; i < postfix.size(); i++)
		{
			if (isNumber(postfix[i]))
			{
				double tmp = stod(&postfix[i]);
				st_d.Push(tmp);
			}
			if (isOperator(postfix[i]))
			{
				if (st_d.Empty())
					throw "ñòåê ïóñò";
				double b = st_d.Pop();
				double a = st_d.Pop();
				switch (postfix[i])
				{
				case '+': st_d.Push(a + b); break;
				case '-': st_d.Push(a - b); break;
				case '*': st_d.Push(a * b); break;
				case '/': st_d.Push(a / b); break;
				case '^': st_d.Push(pow(a, b)); break;
				case 's':st_d.Push(sin(st_d.Pop()));break;
				case 'c':st_d.Push(cos(st_d.Pop()));break;
				case 't':st_d.Push(tan(st_d.Pop()));break;
				default: throw 0; break;
				}

			}
		}
		return st_d.Pop();
		}
	double Calc()
	{
		string infix = "(" + expr + ")";
		ClearStacks();

		for (int i = 0; i < infix.size(); i++)
		{
			if (isNumber(infix[i]))
			{
				size_t ind;
				double num = stod(&infix[i], &ind);
				st_d.Push(num);
				i += ind - 1;
			}
			if (infix[i] == '(')
			{
				st_c.Push('(');

			}
			if (infix[i] == 's' || infix[i] == 'c' || infix[i] == 't')
			{
				if (infix.substr(i, 4) == "sin(" || infix.substr(i, 4) == "cos(" || infix.substr(i, 4) == "tan(")
				{
					st_c.Push(infix[i]);
					i += 3;
					continue;
				}
			}
			if (infix[i] == ')')
			{
				while (st_c.Top() != '(' && st_c.Top() != 's' && st_c.Top() != 'c' && st_c.Top() != 't')
				{
					double b = st_d.Pop();
					double a=st_d.Pop();
					switch (st_c.Pop())
					{
					case'+':st_d.Push(a + b);break;
					case'-':st_d.Push(a - b);break;
					case'*':st_d.Push(a * b);break;
					case'/':if (b == 0)throw "incorrect expr";
						st_d.Push(a / b);break;
					case'^':st_d.Push(pow(a, b));break;
					default:break;
					}
				}
				switch (st_c.Pop())
				{case 's':st_d.Push(sin(st_d.Pop()));break;
				case 'c':st_d.Push(cos(st_d.Pop()));break;
				case 't':st_d.Push(tan(st_d.Pop()));break;
				default:break;
				}
			}

			if (isOperator(infix[i]))
			{
				while (Priority(st_c.Top()) >= Priority(infix[i]))
				{
					double b = st_d.Pop();
					double a = st_d.Pop();
					switch (st_c.Pop())
					{
					case '+': st_d.Push(a + b); break;
					case '-': st_d.Push(a - b); break;
					case '*': st_d.Push(a * b); break;
					case '/': st_d.Push(a / b); break;
					case '^': st_d.Push(pow(a, b)); break;
					default:throw 0;break;
					}
				}
				st_c.Push(infix[i]);
			}
			if (isFunction(infix, i)) {
				switch (st_c.Pop())
				{
				case 's':st_d.Push(sin(st_d.Pop()));break;
				case 'c':st_d.Push(cos(st_d.Pop()));break;
				case 't':st_d.Push(tan(st_d.Pop()));break;
				default:throw 0;break;
				}
				i += 3;
				st_c.Push('(');
				continue;
			}
		}
		return st_d.Pop();
	};
	string ToPostfix()
	{
		string infix = "(" + expr + ")";
		ClearStacks();
		for (int i = 0; i < infix.size(); i++)
		{
			if (isNumber(infix[i]))
			{
				postfix += infix[i];
				postfix += ' ';
			}
			if (infix[i] == '(')
				st_c.Push('(');

			if (infix[i] == ')')
			{
				while (st_c.Top() != '(')
				{
					postfix += st_c.Pop();
					postfix += ' ';
				}
				st_c.Pop();
			}

			if (isOperator(infix[i]))
			{
				int prioritet = Priority(infix[i]);

				while (Priority(st_c.Top()) >= Priority(infix[i]) && st_c.Empty() == false)
				{
					postfix += st_c.Pop();
					postfix += ' ';
				}
				st_c.Push(infix[i]);
			}
		}
		return postfix;
	}
	void SetExpr(string c)
	{
		TStack <char> ch;
		for (int i = 0; i < c.size(); i++)
		{
			if (c[i] == '(')
			{
				ch.Push(c[i]);
			}

			if (c[i] == ')')
			{
				if (ch.Empty())
				{
					exit(0);
				}
				else
				{
					ch.Pop();
				}
			}
		}
		if (ch.Empty())
		{
			expr = c;
		}
		else
		{
			exit(0);

		}

	};
};

