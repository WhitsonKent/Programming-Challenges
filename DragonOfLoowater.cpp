// DragonOfLoowater.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<algorithm>
//#include<fstream>
using namespace std;

//void sortArr(int arr[],int l);

int main()
{
	//ofstream myfile;
	//myfile.open("example.txt");
	int n, m;
	int dragons[20010];
	int knights[20010];
	int pay = 0;
	int slayed = 0;
	for (;;) {
		pay = 0;
		slayed = 0;
		cin >> n >> m;
		if (n < 0) n = 0;
		if (m < 0) m = 0;
		if (n > 20000) n = 20000;
		if (m > 20000) m = 20000;
		if (n == 0 && m == 0) break;
		//get dragon heights
		for (int i = 0; i < n; i++) {
			cin >> dragons[i];
		}
		sort(dragons, dragons + n);
		//get knight heights
		for (int i = 0; i < m; i++) {
			cin >> knights[i];
		}
		sort(knights, knights + m);
		if (n == 0) goto SAVED;
		if (m == 0 || m < n) goto DOOMED;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (knights[j] >= dragons[i]) {
					pay += knights[j];
					knights[j] = 0;
					slayed++;
					break;
				}
			}
		}
		if (slayed == n) {
		SAVED:
			cout << pay << "\n";
			//myfile << pay << "\n";
		}
		else {
		DOOMED:
			cout << "Loowater is doomed!\n";
			//myfile << "Loowater is doomed!\n";
		}
	}
	//myfile.close();
}