// TugOfWar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;


int main()
{
	int n, m, aw, bw,totalWeight;
	deque<int> picnic;
	cin >> n;
	for (int i = 0; i < n; i++) {
		totalWeight = 0;
		aw = 0;
		bw = 0;
		cout << endl;
		cin >> m;
		for (int j = 0; j < m; j++) {
			cin >> picnic[j];
			totalWeight += picnic[j];
		}
		sort(picnic.begin,picnic.end);
		for (int j = 1; j <m; j++) {
			if (picnic.size == 3) {

			}
		}
	}
	if (bw <= aw) cout << bw << " " << aw << "\n";
	else cout << aw << " " << bw << "\n";
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
