#include <iostream>

int main()
{
	int n;
	int arr1[3000];
	int arr2[3000];
	int num;
	int diff;
	bool flag;
	while (std::cin >> n) {
		if (n > 3000) n = 3000;
		flag = true;
		for (int i = 0; i < n; i++) {
			arr1[i] = 0;
			arr2[i] = 0;
		}
		for (int i = 0; i < n;i++) {
			std::cin >> num;
			arr1[i] = num;
		}
		for (int i = 1; i < n; i++) {
			if (arr1[i] > arr1[i - 1]) {
				diff = arr1[i] - arr1[i - 1];
			}
			else diff = arr1[i - 1] - arr1[i];
			arr2[diff] = 1;
		}
		for (int i = 1; i < n; i++) {
			if (arr2[i] == 0) {
				flag = false;
				break;
			}
		}
		if (flag) {
			std::cout << "Jolly\n";
		}
		else std::cout << "Not jolly\n";
	}
}