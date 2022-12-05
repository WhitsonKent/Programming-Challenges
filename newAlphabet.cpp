// newAlphabet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;

void translate(string str) {
	char a;
	for (int i = 0; i < str.length(); i++) {
		a = toupper(str[i]);
		switch (a) {
		case 'A':
			cout << "@";
			break;
		case 'B':
			cout << "8";
			break;
		case 'C':
			cout << "(";
			break;
		case 'D':
			cout << "|)";
			break;
		case 'E':
			cout << "3";
			break;
		case 'F':
			cout << "#";
			break;
		case 'G':
			cout << "6";
			break;
		case 'H':
			cout << "[-]";
			break;
		case 'I':
			cout << "|";
			break;
		case 'J':
			cout << "_|";
			break;
		case 'K':
			cout << "|<";
			break;
		case 'L':
			cout << "1";
			break;
		case 'M':
			cout << "[]\\/[]";
			break;
		case 'N':
			cout << "[]\\[]";
			break;
		case 'O':
			cout << "0";
			break;
		case 'P':
			cout << "|D";
			break;
		case 'Q':
			cout << "(,)";
			break;
		case 'R':
			cout << "|Z";
			break;
		case 'S':
			cout << "$";
			break;
		case 'T':
			cout << "']['";
			break;
		case 'U':
			cout << "|_|";
			break;
		case 'V':
			cout << "\\/";
			break;
		case 'W':
			cout << "\\/\\/";
			break;
		case 'X':
			cout << "}{";
			break;
		case 'Y':
			cout << "`/";
			break;
		case 'Z':
			cout << "2";
			break;
		default:
			cout << str[i];
		}
	}
	cout << endl;
}


int main()
{
	string str;
	getline(cin,str);
	translate(str);
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
