#include <iostream>

using namespace std;

int main()
{
	double v, a;

	cout << "Enter v and a: ";
	cin >> v >> a;

	double lenght = v * v / (2 * a);

	cout << "The minimum runway length for this airplane is " << lenght << endl;

	return 0;
}