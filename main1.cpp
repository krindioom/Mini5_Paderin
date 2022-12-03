#include <iostream>
using namespace std;

double my_pow_fast(double indicator, int degree)
{
	double finalNumber = 1;

	degree = degree < 0 ? -degree : degree;

	while (degree)
	{
		if (degree % 2 == 0)
		{
			degree /= 2;
			indicator *= indicator;
		}

		else
		{
			degree--;
			finalNumber *= indicator;
		}
	}

	return degree < 0 ? 1/finalNumber : finalNumber;
}

int main()
{
	int degree;
	double indicator;

	cin >> indicator >> degree;
	double number = my_pow_fast(indicator, degree);

	cout << number;

	return 0;
}