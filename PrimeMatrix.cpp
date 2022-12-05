// PrimeMatrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <time.h> 
using namespace std;

bool populateMatrix(long long m[50][50], long long n, long long b);
bool isPrime(long long x);
bool distinctRow(long long m[50][50], long long r, long long n, long long x);
bool distinctCol(long long m[50][50], long long c, long long n, long long x);
bool primeRow(long long m[50][50], long long r, long long n);
bool primeCol(long long m[50][50], long long c, long long n);
string findSum(string str1, string str2)
{
	if (str1.length() > str2.length())
		swap(str1, str2);

	string str = "";

	int n1 = str1.length(), n2 = str2.length();

	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());

	int carry = 0;
	for (int i = 0; i < n1; i++)
	{
		int sum = ((str1[i] - '0') + (str2[i] - '0') + carry);
		str.push_back(sum % 10 + '0');

		carry = sum / 10;
	}

	for (int i = n1; i < n2; i++)
	{
		int sum = ((str2[i] - '0') + carry);
		str.push_back(sum % 10 + '0');
		carry = sum / 10;
	}
	if (carry)
		str.push_back(carry + '0');

	reverse(str.begin(), str.end());

	return str;
}

bool populateMatrix(long long m[50][50], long long n, long long b) {

	long long hold = 0;
	bool rowClear = false, colClear = false;
	srand(time(NULL));
	//populate matrix
	for (long long i = 0; i < n; i++) {
		for (long long j = 0; j < n; j++) {
			m[i][j] = 0;
			for (long long x = 1; x <= b; x++) {
				if (distinctRow(m, i, j, x) && distinctCol(m, j, i, x)) {
					m[i][j] = x;
					break;
				}
			}
			if (m[i][j] == 0) return 0;
		}
	}

	for (long long i = 0; i < n; i++) {
		for (long long j = 0; j < n; j++) {
			hold = m[i][j];
			for (long long x = 1; x <= b; x++) {
				if (distinctRow(m, i, n, x) && distinctCol(m, j, n, x)) {
					m[i][j] = x;
					if (primeRow(m, i, n) || primeCol(m, j, n)) {
						return 1;
					}
					else m[i][j] = hold;
				}
			}
		}
	}

	/*for (long long i = 0; i < n; i++) {
		if (primeRow(m, i, n)) return 1;
	}
	for (long long i = 0; i < n; i++) {
		if (!primeCol(m, i, n)) return 1;
	}*/
	return 0;
}
bool isPrime(long long x) {
	for (long long i = 2; i < x; i++) {
		if (x % i == 0) {
			return 0;
		}
	}return 1;
}
bool distinctRow(long long m[50][50], long long r, long long n, long long x) {
	if (n == 0) return 1;
	for (long long i = 0; i < n; i++) {
		if (m[r][i] == x) return 0;
	}
	return 1;
}
bool distinctCol(long long m[50][50], long long c, long long n, long long x) {
	if (n == 0) return 1;
	for (long long i = 0; i < n; i++) {
		if (m[i][c] == x) return 0;
	}
	return 1;
}
bool primeRow(long long m[50][50], long long r, long long n) {
	string sum = "0";

	for (long long i = 0; i < n; i++) {
		sum = findSum(sum, to_string(m[r][i]));
	}
	return(isPrime(stoll(sum)));
}
bool primeCol(long long m[50][50], long long c, long long n) {
	long long sum = 0;
	for (long long i = 0; i < n; i++) {
		sum += m[i][c];
	}
	return(isPrime(sum));
}
void shiftArray(long long m[50], long long n) {
	long long temp;
	temp = m[n - 1];
	for (long long i = n - 1; i > 0; i--) {
		m[i] = m[i - 1];
	}
	m[0] = temp;
}

int main()
{
	long long m[50][50];
	long long arr[50];
	long long b, n;
	cin >> n >> b;
	if (n > 50 || n < 2 || b < 2 || b>1000000000) goto SKIP;
	if (populateMatrix(m, n, b)) {
		for (long long i = 0; i < n; i++) {
			if (primeRow(m, i, n)) {
				for (long long j = 0; j < n; j++) {
					arr[j] = m[i][j];
				}
				goto PRINT;
			}
			if (primeCol(m, i, n)) {
				for (long long j = 0; j < n; j++) {
					arr[j] = m[j][i];
				}
				goto PRINT;
			}
		}
	}
	else cout << "impossible\n";
	goto END;
SKIP:
	cout << "impossible\n";
	goto END;
PRINT:
	for (long long i = 0; i < n; i++) {
		for (long long j = 0; j < n; j++) {
			cout << arr[j];
			if (j == n - 1)cout << endl;
			else cout << " ";
		}
		shiftArray(arr, n);
	}
END:
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
