// drinkingSong.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int n;
	string drink;
	cin >> n;
	if (n < 1)n = 1;
	if (n > 99)n = 99;
	cin >> drink;
	for (int i = n; i > 0; i--) {
		if (i > 2) {
			cout << i << " bottles of "<< drink <<" on the wall, " << i
				<< " bottles of " << drink << ".\n";
			cout << "Take one down, pass it around, " << i - 1 << " bottles of " << drink << " on the wall.\n\n";
		}
		else if (i == 2) {
			cout << i << " bottles of " << drink << " on the wall, " << i
				<< " bottles of " << drink << ".\n";
			cout << "Take one down, pass it around, " << i - 1 << " bottle of " << drink << " on the wall.\n\n";
		}else {
			cout << i << " bottle of " << drink << " on the wall, " << i
				<< " bottle of " << drink << ".\n";
			cout << "Take it down, pass it around, no more bottles of " << drink << ".\n";
		}
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
