// beehives.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

bool findHive(float ax, float ay, float bx, float by, float d);

int main()
{
	float d,ax,bx,ay,by;
	int n;
	float hives[100][2];
	int sour;
	for (;;) {
		cin >> d >> n;
		sour = 0;
		if (d == 0 && n == 0) break;
		for (int i = 0; i < n; i++) {
			cin >> hives[i][0] >> hives[i][1];
		}
		for (int i = 0; i < n; i++) {
			ax = hives[i][0];
			ay = hives[i][1];
			for (int j = 0; j < n; j++) {
				if (i != j) {
					bx = hives[j][0];
					by = hives[j][1];
					if (findHive(ax, ay, bx, by, d)) {
						sour++;
						break;
					}
				}
			}
		}
		cout << sour << " sour, " << n - sour << " sweet\n";
	}
}

bool findHive(float ax, float ay, float bx, float by, float d)
{
	float dist = 0;
	float n = ((ax - bx) * (ax - bx) + (ay - by) * (ay - by));
	dist = sqrt(n);
	if (dist <= d) return true;
	else return false;
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
