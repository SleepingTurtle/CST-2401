#include <iostream>

using namespace std;

int main()
{
	//Prompt the user to enter weight in pounds
	double weight;

	cout << "Enter weight in pounds: ";
	cin >> weight;

	//Prompt the user to enter height
	double feet, inches;

	cout << "Enter feet: ";
	cin >> feet;
	cout << "Enter inches: ";
	cin >> inches;

	double height = feet * 12 + inches;

	//Computer BMI
	double BMI = weight * .45359237 / ((height * .0254) * (height * .0254));

	//Display result
	cout << "Your BMI is " << BMI << endl;
	if (BMI < 18.5)
		cout << "Underweight" << endl;
	else if (BMI < 25)
		cout << "Normal" << endl;
	else if (BMI < 30)
		cout << "Obese" << endl;

	return 0;
}