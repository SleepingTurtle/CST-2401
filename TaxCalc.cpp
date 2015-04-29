#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	//Obtain input
	cout << "Enter employee's name: ";
	string name;
	getline(cin, name);

	cout << "Enter number of hours worked in a week: ";
	double hours;
	cin >> hours;

	cout << "Enter hourly pay rate: ";
	double payRate;
	cin >> payRate;

	cout << "Enter federal tax withholding rate: ";
	double fedTaxRate;
	cin >> fedTaxRate;

	cout << "Enter state tax withhold rate: ";
	double stateTaxRate;
	cin >> stateTaxRate;

	double grossPay = hours * payRate;
	double fedTaxWith = grossPay * fedTaxRate;
	double stateTaxWith = grossPay * stateTaxRate;
	double totalDeduction = fedTaxWith + stateTaxWith;
	double netPay = grossPay - totalDeduction;

	//Obtain output
	cout << "Employee Name: " << name << endl << endl;
	cout << "Hours Worked: " << hours << endl;
	cout << "Pay Rate: $" << grossPay << endl;
	cout << "Gross Pay: $" << grossPay << endl;
	cout << "Deductions: " << endl;
	cout << " Federal Withholding (" << fedTaxRate * 100 << "%): $" << fixed << setprecision(2) << fedTaxWith << endl;
	cout << " State Withholding (" << stateTaxRate * 100 << "%):" << " $" << fixed << setprecision(2) << stateTaxWith << endl;
	cout << " Total Deduction:" << " $" << (int)(totalDeduction * 100) / 100.0 << endl;
	cout << "Net Pay: $" << (int)(netPay * 100) / 100.0 << endl;

	return 0;  
}