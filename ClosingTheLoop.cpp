// ClosingTheLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n,s,temp;
	string str;
	char clr;
	vector<int> r, b;
	int rl, bl,x,length;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < s; j++) {
			cin >> str;
			temp = stoi(str);
			clr = str[str.length() - 1];
			switch (clr) {
			case 'R':
				r.push_back(temp);
				break;
			case 'B':
				b.push_back(temp);
				break;
			}
		}
		rl = r.size();
		bl = b.size();
		sort(r.begin(), r.end(), greater<int>());
		sort(b.begin(), b.end(), greater<int>());
		if (rl >= bl) x = bl;
		else x = rl;
		if (rl == 0)x = bl;
		if (bl == 0)x = rl;
		length = 0;
		for (int j = 0; j < x; j++) {
			if(rl!=0) length += r[j]-1;
			if(bl!=0) length += b[j]-1;
		}
		if (rl == 0 || bl == 0)length = 0;
		r.clear();
		b.clear();
		cout << "Case #" << i + 1 << ": " << length << endl;
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
