// divisionOfN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int k,n,m,x,y;
	for (;;) {
		cin >> k;
		if (k == 0) break;
		cin >> n >> m;
		for (int i = 0; i < k; i++) {
			cin >> x >> y;
			if (x == n || y == m) {
				str = "divisa\n";
				goto FIN;
			}
			if (x < n && y > m) {
				str = "NO\n";
				goto FIN;
			}
			if (x > n && y > m) {
				str = "NE\n";
				goto FIN;
			}
			if (x < n && y < m) {
				str = "SO\n";
				goto FIN;
			}
			if (x > n && y < m) {
				str = "SE\n";
				goto FIN;
			}
		FIN:
			cout << str;
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
