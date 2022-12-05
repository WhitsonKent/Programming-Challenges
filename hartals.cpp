// hartals.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int t;
	int n;
	int h;
	int p[100];
	int np;
	cin >> t;
	for (int c = 0; c < t; c++) {
		h = 0;
		cin >> n;
		cin >> np;

		for (int i = 0; i < np; i++) {
			cin >> p[i];
		}

		for (int day = 1; day <= n; day++) {
			if (day % 7 == 0 || (day + 1) % 7 == 0) goto SKIP;
			for (int j = 0; j < np; j++) {
				if (day % p[j] == 0) {
					h += 1;
					break;
				}
			}
		SKIP:
			h = h;
		}
		cout << h << endl;
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
