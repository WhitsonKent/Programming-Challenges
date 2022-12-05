// ABC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
	vector<int> q;
	int n;
	string abc;
	for (int i = 0; i < 3; i++) {
		cin >> n;
		q.push_back(n);
	}
	sort(q.begin(), q.end());
	cin >> abc;
	for (int i = 0; i < 3; i++) {
		switch (abc[i]) {
		case 'A':
			cout << q[0] << " ";
			break;
		case 'B':
			cout << q[1] << " ";
			break;
		case 'C':
			cout << q[2] << " ";
			break;
		}
	}
	cout << endl;
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
