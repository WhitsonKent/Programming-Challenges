// AutoPoetry.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void finishPoem(string l1,string l2) {
	string s1 = l1;
	string s2 = l2;
	string d1 = "<";
	string d2 = ">";//d for delimiter
	string d3 = " ";
	string d4 = ".";
	string prefix1, prefix2,w1,w2;
	int p1, p2,p3,p4;
	int end;
	//find <>
	p1 = s1.find(d1);
	p2 = s1.find(d2);
	if (p2 - p1 != 1) {
		prefix1 = s1.substr(p1 + 1, p2 - p1 - 1);
	}
	w1 = s1.substr(p2 + 1, s1.find_last_of(d3)-p2);

	end = s1.length() - 1;
	p3 = s1.find_last_of(d1);
	p4 = s1.find_last_of(d2);
	if (p4 - p3 != 1) {
		prefix2 = s1.substr(p3 + 1, p4 - p3 - 1);
	}
	w2 = s1.substr(p4 + 1, end);
	
	s1.erase(s1.begin() + s1.find(d1));
	s1.erase(s1.begin() + s1.find(d2));
	s1.erase(s1.begin() + s1.find_last_of(d1));
	s1.erase(s1.begin() + s1.find_last_of(d2));
	cout << s1<<endl;
	s2.erase(s2.begin() + s2.find(d4), s2.begin() + s2.find_last_of(d4)+1);
	
	cout << s2 << prefix2 << w1 << prefix1 << w2 << endl;
}

int main()
{
	int n;
	string num,l1, l2;
	getline(cin, num);
	n = stoi(num);

	for (int i = 0; i < n; i++) {
		getline(cin, l1);
		getline(cin, l2);
		finishPoem(l1, l2);
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
