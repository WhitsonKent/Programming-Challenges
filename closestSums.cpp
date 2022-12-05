// closestSums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
	int n, m,ma[25],na[1001];
	int ans,sum,num,diff, mindiff,target;
	int c = 0;
	while (cin >> n) {
		if (n > 1000)n = 1000;
		if (n < 2)n = 2;
		c++;
		for (int i = 0; i < n; i++) {
			cin >> na[i];
		}
		cin >> m;
		if (m < 1)m = 1;
		if (m > 24)m = 24;
		for (int i = 0; i < m; i++) cin >> ma[i];
		cout << "Case " << c << ":\n";
		sum = 0;
		ans = 0;
		mindiff = 50000000;
		for (int i = 0; i < m; i++) {
			target = ma[i];
			for (int j = 0; j < n; j++) {
				for (int k = 0; k < n; k++) {
					if (j != k) {
						sum = na[j] + na[k];
						if (sum <= target) {
							diff = target - sum;
						}
						else diff = sum - target;
						if (diff == 0) {
							ans = sum;
							goto SKIP;
						}
						else if (diff <= mindiff) {
							mindiff = diff;
							ans = sum;
						}
					}
				}
			}
		SKIP:
			cout << "Closest sum to " << target << " is " << ans << ".\n";
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
