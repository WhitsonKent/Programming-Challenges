// bball1on1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string score;
	cin >> score;
	char c,d;
	int p=0, a = 0,b=0;
	for (int i = 0; i < score.length() - 1;) {
		c = score[i];
		d = score[i + 1];
		if (d == '1') p = 1;
		else p = 2;
		if (c == 'A') {
			a += p;
		}
		else if(c == 'B') {
			b += p;
		}
		if (a >= 10 && b >= 10) {
			if (a > b && (a - b >= 2)) {
				cout << "A";
				break;
			}
			else if (b > a && (b - a >= 2)) {
				cout << "B";
				break;
			}
		}
		else if (a >= 11) {
			cout << "A";
			break;

		}
		else if (b >= 11) {
			cout << "B";
			break;
		}
		i += 2;
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
