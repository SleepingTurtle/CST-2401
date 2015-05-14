#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	//Takes each input and stores in appropriate value
	double distance;
	cout << "Enter the driving distance: ";
	cin >> distance;

	double miles;
	cout << "Enter miles per gallon: ";
	cin >> miles;

	double price;
	cout << "Enter price per gallon: ";
	cin >> price;

	double total = (distance/miles) * price; //Computes the total price for 
	cout << "The cost of driving is " << setprecision(5) << total << endl;
	

	return 0;
}