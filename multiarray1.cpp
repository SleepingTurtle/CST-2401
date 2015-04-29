#include <iostream>

using namespace std;

const int size = 4;

double sumColumn(const double m[][size], int rowSize, int columnIndex)
{
	double total = 0;

	for (int i = 0; i < rowSize; i++)
		total += m[i][columnIndex];

	return total;
}

int main()
{
	double matrix [3][size];


	cout << "Enter a 3-by-4 matrix row by row: " << endl;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < size; j++)
			cin >> matrix[i][j];

	for (int j = 0; j < size; j++)
		cout << "Sum of the elements at column " << j << " is " << 
			sumColumn(matrix, 3, j) << endl;
}