// SecretResearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int n = 0;
	int jacks[10];
	cin >> n;
	cout << "Lumberjacks:\n";
	bool ordered = true;
	for (int i = 0; i < n; i++) {
		ordered = true;
		cin >> jacks[0];
		cin >> jacks[1];
		if (jacks[1] > jacks[0]) goto stl;
		for (int j = 2; j < 10; j++) {
			cin >> jacks[j];
			if (jacks[j - 1] < jacks[j]) ordered = false;
		}
		goto results;
	stl:
		for (int j = 2; j < 10; j++) {
			cin >> jacks[j];
			if (jacks[j - 1] > jacks[j]) ordered = false;
		}
	results:
		if (ordered) {
			cout << "Ordered\n";
		}
		else {
			cout << "Unordered\n";
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
