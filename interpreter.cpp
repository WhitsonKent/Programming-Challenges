// interpreter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int RAM[1000];
static int rp = 0;//rampointer
int r[10];

int process(int num);

int main()
{
	int cmd;
	int numCmds;
	int cases;
	int ok = 0;
	int executes = 0;
	std::cin >> cases;
	for (int i = 0; i < cases; i++) {
		numCmds = 0;
		while (std::cin >> cmd) {
			if (cmd >= 1000) cmd = cmd % 1000;
			RAM[numCmds]=cmd;
			numCmds++;
		}
		rp = 0;
		while (rp <= numCmds) {
			std::cout << RAM[rp] << "\n";
			ok = process(RAM[rp]);
			rp++;
			executes++;
			if (ok == 100) break;
		}
		std::cout << "\n" << executes;
	}

	//register[0];
}

int process(int num) {
	int cmd, d, n;
	if (num >= 100) {
		n = num % 10;
		d = ((num - n) % 100) / 10;
		cmd = num - d * 10 + n;
	}
	else {
		n = num % 10;
		d = (num - n) / 10;
		cmd = 0;
	}
	switch (cmd)
	{
	case 100:
		return 100;
		break;
	case 200:
		r[d] = n;
		break;
	case 300:
		r[d] += n;
		break;
	case 400:
		r[d] = r[d] * n;
		break;
	case 500:
		r[d] = r[n];
		break;
	case 600:
		r[d] += r[n];
		break;
	case 700:
		r[d] = r[d] * r[n];
		break;
	case 800:
		r[d] = r[r[n]];
		break;
	case 900:
		r[r[n]] = r[d];
		break;
	case 0:
		if (n != 0) {
			rp = r[d]-1;
		}
		break;
	}
	return cmd;
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
