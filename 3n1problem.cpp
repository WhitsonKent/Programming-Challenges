#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char* argv[])
{
	unsigned int a, b, n,hold;
	bool swap = false;
	int maxCycle = 0;
	int cycles = 0;
	int arrA[100], arrB[100], arrC[100];
	int z = 0;
	//begin counting cycles
	while (cin >> a >> b)
	{
		if (a > b) {
			hold = a;
			a = b;
			b = hold;
			swap = true;
		}
		for (int i = a; i <= b; i++) {//checks between nums A and B for cycle lengths
			cycles = 1;//default min number of cycles is 1
			n = i;
			while (n != 1) {
				cycles++;
				if (n % 2 == 0) {
					n = n / 2;
				}
				else n = 3 * n + 1;
			}
			if (cycles > maxCycle) { maxCycle = cycles; }//selects largest cycle
		}
		if (swap) {
			hold = a;
			a = b;
			b = hold;
			swap = false;
		}
		cout << a << " " << b << " " << maxCycle << "\n";
		maxCycle = 0;
	}
	return 0;
}