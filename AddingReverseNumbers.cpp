// AddingReverseNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

string findSum(string str1, string str2)
{ 
	if (str1.length() > str2.length())
		swap(str1, str2);

	string str = "";

	int n1 = str1.length(), n2 = str2.length();

	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());

	int carry = 0;
	for (int i = 0; i < n1; i++)
	{
		int sum = ((str1[i] - '0') + (str2[i] - '0') + carry);
		str.push_back(sum % 10 + '0');

		carry = sum / 10;
	}

	for (int i = n1; i < n2; i++)
	{
		int sum = ((str2[i] - '0') + carry);
		str.push_back(sum % 10 + '0');
		carry = sum / 10;
	}
	if (carry)
		str.push_back(carry + '0');

	reverse(str.begin(), str.end());

	return str;
}
void reverseStr(string& str)
{
	int n = str.length();
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
}
void removeZeroes(string& str) {
	int n = str.length();
	int end = 0;
	if (n <= 1) return;
	for (int i = 0; i < n; i++) {
		if (str[i] != '0') {
			end = i;
			break;
		}
	}
	if (end > 0) {
		str.erase(0, end);
	}
	else return;

}

int main()
{
	int n;
	string a, b, c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		reverseStr(a);
		reverseStr(b);
		c=findSum(a, b);
		reverseStr(c);
		removeZeroes(c);
		cout << c << endl;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
