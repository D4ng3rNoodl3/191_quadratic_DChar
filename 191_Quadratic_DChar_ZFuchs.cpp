/*
	191
	Quadratic
	DChar_ZFuchs
*/

#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std;

bool findAgain = 1;

void displayInstructions()
{
	cout << "Hello! This program will solve Quadratic Equations for real roots. When prompted, enter variables A, B, C." << endl;
}

int getCoefficients(int& a, int& b, int& c)
{
	cout << "Enter value A: " << "\n";
	cin >> a;
	cout << "Enter value B: " << "\n";
	cin >> b;
	cout << "Enter value C: " << "\n";
	cin >> c;

	return a, b, c;
}

int calculateDiscriminant(int& a, int &b, int &c)
{
	return(((b * b) - (4 * a * c)));
}

double calculateRoots(int i, double discrim, const int a, const int b)
{
	double root1, root2; 

	if (discrim > 0)
	{
		if (i == 1)
		{
			return(((-b) + sqrt(discrim)) / (2 * a));
		}
		else
		{
			return(((-b) - sqrt(discrim)) / (2 * a));
		}
	}
	else if (discrim == 0)
	{
		return(root1 = root2 = (-1 * b) / (2 * a));
	}
	else
	{
		return NULL;
	}
}

int main()
{
	while (findAgain == 1)
	{
		displayInstructions();

		int a, b, c, discrim;

		getCoefficients(a,b,c);

		discrim = calculateDiscriminant(a, b, c);

		if(discrim < 0)
		{
			cout << "Non-real answer." << endl;
		}
		else
		{
			cout << "Discriminant : sqrt(" << discrim << ")" << endl;

			cout << "Root 1: " << fixed << setprecision(3) << calculateRoots(1, discrim, a, b) << "\n"
				<< "Root 2: " << fixed << setprecision(3) << calculateRoots(2, discrim, a, b) << endl;
		}

		cout << "Would you like to find another Quadratic? 1 for Yes, 0 for No : " << endl;
		cin >> findAgain;
	}
}
