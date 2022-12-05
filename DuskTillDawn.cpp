// DuskTillDawn.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct train {
	string d;
	char a[32];
	int dt;
	int at;
	int time;

};

int main()
{
	int C,N;
	string start,end;
	int min;
	train arr[1000];
	cin >> C;
	for (int i = 0; i < C; i++) {
		min = 0;
		cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> arr[j].d >> arr[j].a >> arr[j].dt >> arr[j].at;
		}
		cin >> start >> end;
		for (int j = 0; j < N; j++) {
			if (!start.compare(arr[j].d) && validTime(arr[j])) {

			}
		}
	}
}
int validTime(train t) {
	if ((t.dt >= 18 && (t.at <= 6||t.at>t.dt))
		|| (t.dt <= 6 && (t.at > t.dt && t.at <= 6))) {
		return 1;
	}
	else return 0;
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
