// trik.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int trik(string str) {
	int cup[3] = { 1,0,0 };
	int hold;
	char l;

	for (int i = 0; i < str.length(); i++) {
		l = str[i];
		switch (l) {
		case 'A':
			hold = cup[0];
			cup[0] = cup[1];
			cup[1] = hold;
			break;
		case 'B':
			hold = cup[1];
			cup[1] = cup[2];
			cup[2] = hold;
			break;
		case 'C':
			hold = cup[0];
			cup[0] = cup[2];
			cup[2] = hold;
			break;

		}
	}
	for (int i = 0; i < 3; i++) {
		if (cup[i] == 1)return i + 1;
	}
	return 0;
}
int main()
{
	string str;
	cin >> str;
	cout << trik(str) << endl;
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
