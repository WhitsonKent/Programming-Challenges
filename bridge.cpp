#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#include <time.h>
#include <fstream>

#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define E 2.71828182845904523536
using namespace std;

int main()
{
	// Declare the integer M group of people 
	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		deque<int> LftSide;

		int n;

		cin >> n;
		int T;
		for (int i = 0; i < n; i++)
		{
			cin >> T;
			LftSide.push_back(T);
		}

		//using arraySort to through begin and end of the queue.
		sort(LftSide.begin(), LftSide.end());
		int TotalTime = 0;
		stringstream fout;
		while (1)
		{

			int A = LftSide[0];
			//checking for the fastest  person
			if (LftSide.size() == 1) {
				fout << A;  //A returns: Takes A time
				TotalTime += A;
				break;
			}

			int B = LftSide[1];
			// check if the number of people crossing are equal 
			if (LftSide.size() == 2)
			{
				fout << A << " " << B;
				TotalTime += B;
				break;
			}

			if (LftSide.size() == 3)
			{
				fout << A << " " << LftSide[2] << endl << A << endl << A << " " << B;
				TotalTime += B + A + LftSide[2];
				break;
			}


			int Step1, Step2;

			Step2 = LftSide.back();
			LftSide.pop_back();
			Step1 = LftSide.back();
			LftSide.pop_back();

			if (A + Step1 < 2 * B)
			{
				fout << A << " " << Step2 << endl << A << endl << A << " " << Step1 << endl << A << endl;
				TotalTime += Step2 + 2 * A + Step1;
			}
			else
			{
				fout << A << " " << B << endl << A << endl << Step1 << " " << Step2 << endl << B << endl;
				TotalTime += 2 * B + A + Step2;
			}
		}

		cout << TotalTime << endl << fout.str() << endl;

		if (i != N - 1)
			cout << endl;
	}
	return 0;
}