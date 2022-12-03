#include <iostream>
using namespace std;


double my_pow(double indicator, int degree)    
{
	degree = degree < 0 ? -degree : degree;

	double finalNumber = 1;
	for (int i = 0; i < degree; i++)
	{
		finalNumber *= indicator;
	}

	return degree < 0 ? 1 / finalNumber : finalNumber;
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