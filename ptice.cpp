// ptice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string ans;
	int n;
	cin >> n;
	cin >> ans;
	int ap = 0, bp = 0, gp = 0, max = 0;
	int ai = 1, bi = 1, gi = 1;
	string a = "ABC";//adrian
	string b = "BABC";//bruno
	string g= "CCAABB";//goran
	for (int i = 0; i < n; i++) {
		if (a[ai - 1] == ans[i]) ap++;
		if (ap >= max) max = ap;
		if (b[bi - 1] == ans[i]) bp++;
		if (bp >= max) max = bp;
		if (g[gi - 1] == ans[i]) gp++;
		if (gp >= max) max = gp;

		if (ai < 3) {
			ai++;
		}
		else ai = 1;
		if (bi < 4) {
			bi++;
		}
		else bi = 1;
		if (gi < 6) {
			gi++;
		}
		else gi = 1;

	}
	cout << max << endl;
	if (ap >= bp && ap >= gp)cout << "Adrian\n";
	if (bp >= ap && bp >= gp)cout << "Bruno\n";
	if (gp >= ap && gp >= bp)cout << "Goran\n";
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
