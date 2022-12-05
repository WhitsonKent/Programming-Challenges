// AntOnChessBoard.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <math.h>
using namespace std;


int getPow(int n)
{
	// array to store binary number 
	int binaryNum[32];

	// counter for binary array 
	int i = 0;
	while (n > 0) {
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}
	return i;
}

unsigned int getPos(unsigned int n) {
	int start;
	int pow = getPow(n)-1;
	start = 0;
	unsigned int x = 1, y = 1;
	if (n== 1) {
		cout << "1 1\n";
		return 1;
	}
	unsigned int ul=2, rl=2;
	unsigned int i = 2;
	bool up=true, down=false, left=false, right=false;
	/*if (n >=7) {
		up = false;
		x = pow;
		y = pow;
		i= (pow * pow) - pow-1;
		ul = pow, rl = pow;
		if (pow % 2 == 0) {
			down = true;
			y--
		}
		else {
		left = true;
		x--;
		}
	}*/
	for (; i <= n; i++) {
		if (up) {
			y ++;
			if (y == ul) {
				up = false;
				ul++;
				if (x == 1) right = true;
				else left = true;
			}
		}
		else if (right) {
			x ++;
			if (x == rl) {
				right = false;
				rl++;
				if (y == 1)up = true;
				else down = true;
			}
		}
		else if (down) {
			y --;
			if (y == 1) {
				down = false;
				right = true;
			}
		}
		else if (left) {
			x--;
			if (x == 1) {
				left = false;
				up = true;
			}
		}
	}
	cout << x << " " << y << endl;
}


int main()
{
	unsigned int n;
	for (;;) {
		cin >> n;
		if (n == 0)break; 
		else getPos(n);
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
