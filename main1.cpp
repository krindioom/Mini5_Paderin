#include <iostream>
using namespace std;


double my_pow(double indicator, unsigned int degree)    
{
	double finalNumber = 1;
	for (int i = 0; i < degree; i++)
	{
		finalNumber *= indicator;
	}

	return finalNumber;
}

int main()
{
	int degree;
	double indicator;

	cin >> indicator >> degree;
	double number = my_pow(indicator, degree);

	cout << number;

	return 0;
}