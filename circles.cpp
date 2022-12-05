// circles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//h k
bool plotCircle(int x1,int y1,int x2,int y2,int xa, int ya, int r);

int main()
{
	//plotCircle(1,4,2);
}
bool plotCircle(int x1, int y1, int x2, int y2, int xa, int ya, int r)
{
	int hold;
	if (x1 > x2) {
		hold = x1;
		x1 = x2;
		x2 = hold;
		hold = y1;
		y1 = y2;
		y2 = hold;
	}
	if (x1<xa - r || x2>xa + r) {
		return false;
	}
	double y;
	for (double i = xa-r; i <= xa+r; i += 0.5) {
		y = ya + sqrt(r*r - (i - xa) * (i - xa));
		if ((y >= y1 && y <= y2) || (y <= y1 && y >= y2))return true;
		cout << i << " " << y << "\n";
	}
	for (double i = xa - r; i <= xa + r; i += 0.5) {
		y = ya - sqrt(r * r - (i - xa) * (i - xa));
		if ((y >= y1 && y <= y2) || (y <= y1 && y >= y2))return true;
		cout << i << " " << y << "\n";
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
