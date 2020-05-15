#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void isQuadratic(int a,int b,int c)
{
	if (a < 0 || a>200 || b < 0 || b>200 || c < 0 || c>200)
	{
		cout << "Invalid Range";
	}
	else if (a != 0)
	{
		cout << "Quadratic Equation";
	}
	else {
		cout << "Not a Quadratic Equation";
	}
}
void checkRoots(int a, int b, int c)
{
	if (a < 0 || a>200 || b < 0 || b>200 || c < 0 || c>200)
	{
		cout << "Invalid Range";
	}
	else if (a != 0)
	{
		int disc = b * b - 4 * a * c;
		if (disc > 0)
		{
			cout << "Real Roots";
		}
		else if (disc == 0)
		{
			cout << "Equal Roots";
		}
		else if (disc < 0)
		{
			cout << "Imaginary Roots";
		}
	}
	else {
		cout << "Not a Quadratic Equation";
	}

}

void calculateRoots(int a, int b, int c)
{
	int x1, x2;
	if (a < 0 || a>200 || b < 0 || b>200 || c < 0 || c>200)
	{
		cout << "Invalid Range";
	}
	else if (a != 0)
	{
		int disc = b * b - 4 * a * c;
		if (disc > 0)
		{
			cout << " x1 = " << (-b + sqrt(disc)) / (2 * a) << endl;
			cout << " x2 = " << (-b - sqrt(disc)) / (2 * a) << endl;
		}
		else if (disc == 0)
		{
			x1 = x2 = -b / (2 * a);
			cout << " x1 = x2 = " << (-b + sqrt(disc)) / (2 * a) << endl;
			
		}
		else if (disc < 0)
		{
			double realPart = -b / (2 * a);
			double imaginaryPart = sqrt(-disc) / (2 * a);
			cout << "realPart = " << realPart << "+" << imaginaryPart << "i" << endl;
			cout << "Imaginary Part = " << realPart << "-" << imaginaryPart << "i" << endl;

		}
		else {
			cout << "Not a Quadratic Equation";
		}
	}
}

void main()
{
	int a, b, c,choice=0;
	cout << "Enter the value of a ";
	cin >> a;
	cout << "Enter the value of b ";
	cin >> b;
	cout << "Enter the value of c ";
	cin >> c;
	cout <<endl;
	cout << "1) Check Equation is Qadratic? " << endl;
	cout << "2) Check Nature of Roots " << endl;
	cout << "3) Calculate the roots of the equation " << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		isQuadratic(a, b, c);
		break;
	}
	case 2:
	{
		checkRoots(a, b, c);
		break;
	}
	case 3:
	{
		calculateRoots(a, b, c);
		break;
	}
	default :
	{
		cout << "invalid Choice" << endl;
	}
	}

	


}