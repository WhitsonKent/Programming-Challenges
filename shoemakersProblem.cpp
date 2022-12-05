// shoemakersProblem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int n,m,x,y,days,fines;
	int jobs[1000][2];
	for (int i = 0; i < n; i++) {
		cout << " \n";
		days = 0;
		cin >> m;
		for (int j = 0; j < m; j++) {
			cin >> x >> y;
			days += x;
			jobs[j][0]=x;
			jobs[j][1]=y;
		}
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < m; k++) {
				.
			}
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
