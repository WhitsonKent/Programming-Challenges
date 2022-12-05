// LoansomeCarBuyer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	int r;
	for (;;) {
		r = 1080;
		cin >> a >> b >> c >> d;
		if (a == 0 && b == 0 && c == 0 && d == 0) break;
		if (a != b) {
			if (a < b) {
				r += ( a + 40 -b ) * 9;
			}
			else r += (a - b) * 9;
		}//start to first posistion
		if (c != b) {
			if (b < c) {
				r += (c - b) * 9;
			}
			else r += (40 - b + c) * 9;
		}//first to second
		if (c != d) {
			if (c < d) {
				r += (c + 40 - d) * 9;
			}
			else r += (c - d) * 9;
		}//second to third
		cout << r << "\n";
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
