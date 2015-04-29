#include <iostream>
using namespace std;

void function1();
void fuction2(void);

int main()
{
	function1();
	fuction2();

}

void function1()
{
	cout << "fuctional takes no arguments" << endl;
}

void fuction2(void)
{
	cout << "fuction2 also take no arguments" << endl;
}