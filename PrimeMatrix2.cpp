// PrimeMatrix2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <time.h>   
using namespace std;

bool populateMatrix(int m[50], int n, int b);
bool isPrime(int x);
bool distinctRow(int m[50], int n, int x);
bool primeRow(int m[50], int n);
void shiftArray(int m[50], int n);


int main()
{
	int m[50];
	int n,b;
	cin >> n >> b;
	if (populateMatrix(m,n,b)) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << m[j];
				if (j == n - 1)cout << endl;
				else cout << " ";
			}
			shiftArray(m, n);
		}
	}
	else cout << "impossible\n";
}
bool populateMatrix(int m[50], int n, int b) {
	int max=0;
	int hold = 0;
	for (int i = 0; i < n; i++) {
		if (i > max)max = i;
		m[i] = 0;
		for (int x = 1; x <= b; x++) {
			if (distinctRow(m,max,x)) {
				m[i] = x;
			}
		}if (m[i] == 0) return 0;
	}
	
	srand(time(NULL));

	for (int a = 0; a < 1000; a++) {
		for (int i = 0; i < n; i++) {
			for (;;) {
				int x = rand() % b + 1;
				if (distinctRow(m, n, x)) {
					m[i] = x;
					if (primeRow(m, n)) {
						return 1;
					}
				}
			}
		}
	}
	return 0;
}
bool isPrime(int x) {
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			return 0;
		}
	}return 1;
}
bool distinctRow(int m[50], int n, int x) {
	if (n == 0) return 1;
	for (int i = 0; i < n; i++) {
		if (m[i] == x) return 0;
	}
	return 1;
}

bool primeRow(int m[50], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += m[i];
	}
	return(isPrime(sum));
}

void shiftArray(int m[50], int n) {
	int temp;
	temp = m[n - 1];
	for (int i = n - 1; i > 0; i--) {
		m[i] = m[i - 1];
	}
	m[0] = temp;
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
