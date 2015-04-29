#include <iostream>

using namespace std;

const int size = 4;

double sumMajorDiagonal(const double m[][size])
{
	double sum = 0;

	for (int i = 0; i < size; i++)
		sum += m[i][i];

	return sum;
}


int main()
{
	double matrix [size][size];


	cout << "Enter a 4 by 4 matrix row by row: " << endl;

	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			cin >> matrix[i][j];

	for (int j = 0; j < size; j++)
		cout << "Sum of the elements int the major diagonal is " << j << " is " << 
			sumMajorDiagonal(matrix) << endl;
}