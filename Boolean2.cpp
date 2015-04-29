#include <iostream>

using namespace std;

int main()
{
	cout << "Enter a, b, c, d, e, f: " ;
	double a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	double detA = a * d - b * c;

	if (detA == 0)
		cout << "The equation has no solution\n";
	else
	{
		double x = (e * d - b * f) / detA;
		double y = (a * f - e * c) / detA;
		cout << "x is " << x << " and y is " << y << endl;
	}

	return 0;

}