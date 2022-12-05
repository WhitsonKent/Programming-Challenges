// TheSnail.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	float H,U,D,F;
	float currentHeight = 0;
	float distance;
	bool success;
	for (;;) {
		cin >> H >> U >> D >> F;
		if (H == 0) break;
		currentHeight = 0;
		int day = 1;
		for (;; day++) {
			distance = U - U*(F / 100) * (day - 1);
			if(distance > 0) currentHeight += distance;
			if (currentHeight > H) {
				success = true;
				break;
			}
			currentHeight -= D;
			if (currentHeight < 0) {
				success = false;
				break;
			}
		}
		if (success) {
			cout << "success on day " << day << "\n";
		} else cout << "failure on day " << day << "\n";
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
