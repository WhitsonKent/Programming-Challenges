// 123.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int n,strikes;
	cin >> n;
	for (int i = 0; i < n; i++) {
		strikes = 0;
		cin >> str;
		if (str.length() == 3) {
			if (str.at(0) != 'o') {
				strikes++;
			}
			if (str.at(1) != 'n') {
				strikes++;
			}
			if (str.at(2) != 'e') {
				strikes++;
			}
			if (strikes < 2) {
				cout << 1 << "\n";
				goto END;
			}
			strikes = 0;
			if (str.at(0) != 't') {
				strikes++;
			}
			if (str.at(1) != 'w') {
				strikes++;
			}
			if (str.at(2) != 'o') {
				strikes++;
			}
			if (strikes < 2) {
				cout << 2 << "\n";
				goto END;
			}
		}
		else if (str.length() == 5) {
			if (str.at(0) != 't') {
				strikes++;
			}
			if (str.at(1) != 'h') {
				strikes++;
			}
			if (str.at(2) != 'r') {
				strikes++;
			}
			if (str.at(3) != 'e') {
				strikes++;
			}
			if (str.at(4) != 'e') {
				strikes++;
			}
			if (strikes < 2) {
				cout << 3 << "\n";
				goto END;
			}
		}
	END:;
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
