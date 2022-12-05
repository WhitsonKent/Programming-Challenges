// loowater2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

const int MAXN = 20010;
int d[MAXN], a[MAXN];
int n, m;

int solve() {
	int pos = 0, ans = 0;
	if (m < n)
		return ans;
	sort(d, d + n);
	sort(a, a + m);
	for(int i = 0; i < m; i++) {// enumerate everyone
		if (a[i] >= d[pos]) {
			ans += a[i];
			pos++;
		}
		if (pos == n)
			return ans;
	}
	return 0;
}

int main() {
	while (scanf("%d%d", &n, &m) && n + m) {
		for (int i = 0; i < n; i++)
			scanf("%d", &d[i]);
		for (int i = 0; i < m; i++)
			scanf("%d", &a[i]);
		int ans = solve();
		if (!ans)
			printf("Loowater is doomed!\n");
		else
			printf("%d\n", ans);
	}
	return 0;
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
