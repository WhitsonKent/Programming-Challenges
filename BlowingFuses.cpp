// BlowingFuses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int devices[20];
	int onOff[20];
	int power = 0;
	int max = 0;
	int flip;
	for (int s = 1;;s++) {
		int n, m, c;
		std::cin >> n >> m >> c;
		if (n == 0 && m == 0 && c == 0) break;
		if (n > 20)n = 20;
		power = 0;
		max = 0;
		for (int i = 0; i < 20; i++) {
			onOff[i] = 0;
			devices[i] = 0;
		}
		for (int i = 0; i < n; i++) {
			std::cin >> devices[i];
		}
		for (int i = 0; i < m; i++) {
			std::cin >> flip;
			if (onOff[flip-1] == 0) {
				onOff[flip-1] = 1;
				power += devices[flip-1];
			}
			else {
				onOff[flip-1] = 0;
				power -= devices[flip-1];

			}
			if (power > c) break;
			if (power > max) {
				max = power;
			}
		}
		std::cout << "Sequence " << s <<"\n";
		if (power > c) {
			std::cout << "Fuse was blown.\n";
		}
		else {
			std::cout << "Fuse was not blown.\n";
			std::cout << "Maximal power consumption was " << max << " amperes.\n";
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
