// AboveAverage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int grades[1000];
	float n,x,y, sum;
	float avg, abv;
	cin >> n;
	for (int i = 0; i < n; i++) {
		sum = 0;
		cin >> x;
		for (int j = 0; j < x; j++) {
			cin >> grades[j];
			sum += grades[j];
		}
		avg = (sum / x);
		y = 0;
		for (int j = 0; j < x; j++) {
			if (grades[j] > avg)y++;
		}
		avg = (y / x)*100;
		printf("%.3f",avg);
		cout << "%\n";
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
