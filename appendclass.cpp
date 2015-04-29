#include <iostream>
#include <string>

using namespace std;

string sort(string &s)
{
	for (int i = s.length() - 1; i >= 1; i--)
	{
		//Find the maximum in the list[0..i]
		char currentMax = s[0];
		int currentMaxIndex = 0;

		for (int j = 1; j <= i; j++)
		{
			if (currentMax < s[j])
			{
				currentMax = s[j];
				currentMaxIndex = j;
			}
		}

		//Swap list[i] with list[currentMaxIndex] if necessary;
		if (currentMaxIndex != i)
		{
			s[currentMaxIndex] = s[i];
			s[i] = currentMax;
		}
	}

	return s;
}

bool isAnagram(const string &s1, const string &s2)
{
	string news1 = string(s1);
	string news2 = string(s2);
	sort(news1);
	sort(news2);

	if (news1.length() != news2.length()) 
		return false;

	for (int i = 0; i < news1.length(); i++)
	{
		if (news1[i] != news2[i])
			return false;
	}

	return true;
}

int main()
{
	//Prompt the user to enter string one
	cout << "Enter a string s1: ";
	string s1;
	getline(cin, s1);

	//Prompt the user to enter string two
	cout << "Enter a string s2: ";
	string s2;
	getline(cin, s2);

	cout << s1 << " and " << s2 << " are "
	<< (isAnagram(s1, s2) ? "anagrams" : "not anagrams") << endl;

	return 0;
}