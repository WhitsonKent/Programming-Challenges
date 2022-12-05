// KindergartenCounting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	char c;
	bool word = false;
	int words;
	while (getline(cin,str)) {
		word = false;
		words = 0;
		for (int i = 0; i < str.length(); i++) {
			c = str[i];
			if (word == false && ((65 <= c && c <= 90) || (97 <= c && c <= 122))) {
				word = true;
				words++;
			}
			if (word && !((65 <= c && c <= 90) || (97 <= c && c <= 122))) {
				word = false;
			}
		}
		cout << words << endl;
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
