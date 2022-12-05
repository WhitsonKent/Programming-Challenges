// ChildrensGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

bool comp(string a, string b) {
	return a < b;
}

int main()
{
	ofstream output;
	output.open("output.txt");
	int n;
	string tmp;
	string num;
	vector<string> nums;
	string arr[50];
	for (;;) {
		cin >> n;
		if (n == 0)break;
		for (int i = 0; i < n; i++) {
			cin >> num;
			nums.push_back(num);
		}
		sort(nums.begin(), nums.end());
		for (int i = 0; i < n; i++) {
			arr[i] = nums[i];
		}
		for (int i = 0; i <n-1; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				if ((arr[j] == arr[j + 1].substr(0, arr[j].length())) && (arr[j + 1].length()>arr[j].length())) {
					tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
			}
		}
		for (int i = n-1; i >=0; i--) {
			cout << arr[i] << " ";
			output << arr[i];
		}
		nums.clear();
		cout << endl;
		output << endl;
	}
	output.close();
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
