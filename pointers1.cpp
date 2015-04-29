#include <iostream>

using namespace std;

int main()
{
	//Prompt the user to enter array size
	cout << "Enter array size: ";
	int size;
	cin >> size;

	double* numbers = new double[size];
	double sum = 0;

	for (int i = 0; i < size; i++) 
	{
	cout << "Enter a number: ";
	cin >> *(numbers + i);
	sum += *(numbers + i);
	}

	double average = sum /size;
	int countGreater = 0;

	for (int i = 0; i < size; i++)
	{
	if (*(numbers + i) > average)
		countGreater++;
	}

	cout << "The number of values greater than the average is " << countGreater << endl;

	return 0;
}