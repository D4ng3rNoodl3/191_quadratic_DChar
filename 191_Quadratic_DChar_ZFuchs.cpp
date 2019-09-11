/*
	191
	Quadratic
	DChar_ZFuchs
*/

#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std; 

double root1, root2, discrim, a, b, c;
bool findAgain = 1; 

void displayInstructions()
{
	cout << "Hello! This program will solve Quadratic Equations for reall roots. When prompted, enter variables A, B, C." << endl; 
}

double getCoefficients()
{
	cout << "Enter value A: " << "\n";
	cin >> a;
	cout << "Enter value B: " << "\n";
	cin >> b;
	cout << "Enter value C: " << "\n";
	cin >> c;

	return a, b, c;
}

double calculateDiscriminant()
{
	return(((b * b) - (4 * a * c)));
}

double calculateRoots(int i)
{
	if (discrim > 0)
	{
		if (i == 1)
		{
			root1 = (((-b) + sqrt(discrim)) / (2 * a));
			return(root1);
		}
		else
		{
			root2 = ((-b) - sqrt(discrim)) / (2 * a);
			return(root2);
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
	while(findAgain == 1)
	{
		displayInstructions(); 

		getCoefficients(); 

		if (calculateDiscriminant() < 0)
		{
			cout << "Non-real answer." << endl;
		}
		else
		{
			cout << "Discriminant : sqrt(" << calculateDiscriminant() << ")" << endl;

			cout << "Root 1: " << fixed << setprecision(3) << calculateRoots(1) << "\n"
				<< "Root 2: " << fixed << setprecision(3) << calculateRoots(2) << endl;
		}

		cout << "Would you like to find another Quadratic? 1 for Yes, 0 for No : " << endl;
		cin >> findAgain; 
	}
}


