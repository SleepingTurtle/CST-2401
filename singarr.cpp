#include <iostream>

using namespace std;

int main()
{
	const int size = 10;
	int num[size];

	for (int i = 0; i < size; i++)
	{
		cout << "Read a number: ";
		cin >> num[i];
	}

	for (int i = size - 1; i >= 0; i--)
	{
		cout << num[i] << " ";
	}

	return 0;
}