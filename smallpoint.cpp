#include <iostream>
#include <cmath>

using namespace std;

int min (const int* list, int size)
{
	int min = *list;

	for (int i = 1; i < size; i++)
		if (min > *(list + i)) min = *(list + i);

	return min;
}

int main()
{
	int list[] = {1, 2, 4, 5, 10, 100, 2, -22};

	cout << "The min is " << min(list, 8) << endl;

	return 0;
}