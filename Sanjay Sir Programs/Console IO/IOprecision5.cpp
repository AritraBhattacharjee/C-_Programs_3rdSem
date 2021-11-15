#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "precision set to 3 digits\n\n";
	cout.precision(3);

	cout.width(10);
	cout << "value";
	cout.width(15);
	cout << "SQRT_of_value" << endl;

	for (int n = 1; n <= 5; n++)
	{
		cout.width(8);
		cout << n;
		cout.width(13);
		cout << sqrt(n) << endl;
	}

	cout << "precision set to 5 digits\n\n";
	cout.precision(5);
	cout << "sqrt(10)=" << sqrt(10) << endl;

	cout.precision(0);
	cout << "sqrt(10)=" << sqrt(10) << "(default setting)" << endl;

	return 0;
}
