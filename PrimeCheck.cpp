#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

bool isPrime(int num)
{
	if ((num == 1) || (num == 2))
	{
		return true;
	}
	for (int i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

int reversal(int num)
{
	int result = 0;

	while (num != 0)
	{
		int lastDigist = num % 10;
		result = result * 10 + lastDigist;
		num = num /10;
	}
	return result;
}

bool isPalindrome(int num)
{
	return num == reversal(num);
}

int main()
{
	int count = 1;
	for (int i = 2; true; i++)
	{
		if (isPrime(i) && isPrime(reversal(i)) && !isPalindrome(i))
		{
			cout << setw(6) << i;

			if (count % 10  == 0)
				cout << endl;
			if (count == 100) break;

			count++;
		}
	}

	return 0;
}