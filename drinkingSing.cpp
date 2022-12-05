// drinkSong.cpp : This file contains the 'main' function.Program execution beginsand ends there.
//


#include <iostream>
#include <cstring>

using namespace std;
string numOfBottle(int);
void Songlyric(int num);


int main()
{
	//string drinkType; 
	int num;
	do {
		cin >> num;

		if (num < 0 || num>99)
			cout << "Invalid number of bottles. Try next time\n";
	} while (num < 0 || num>99);
	cout << endl;
	while (num > 0)
	{
		Songlyric(num);
		num--;
	}
	system("pause");
	return 0;
}
//bottle count 
string numOfBottle(int number)
{
	int t, n;
	string word = "";
	switch (number)
	{
	case 10: return("Ten ");
	case 11: return("Eleven ");
	case 12: return("Twelve ");
	case 13: return("Thirteen ");
	case 14: return("Fourteen ");
	case 15: return("Fifteen ");
	case 16: return("Sixteen ");
	case 17: return("Seventeen ");
	case 18: return("Eighteen ");
	case 19: return("Nineteen ");
	case 0: return("Zero ");
	}
	t = number / 10;
	n = number % 10;
	switch (t)
	{
	case 9: word = "Ninety-"; break;
	case 8: word = "Eighty-"; break;
	case 7: word = "Seventy-"; break;
	case 6: word = "Sixty-"; break;
	case 5: word = "Fifty-"; break;
	case 4: word = "Forty-"; break;
	case 3: word = "Thirty-"; break;
	case 2:word = "Twenty-"; break;
	}
	switch (n)
	{
	case 1: word += "One "; break;
	case 2: word += "Two "; break;
	case 3: word += "Three "; break;
	case 4: word += "Four "; break;
	case 5: word += "Five "; break;
	case 6: word += "Six "; break;
	case 7: word += "Seven "; break;
	case 8: word += "Eight "; break;
	case 9: word += "Nine "; break;
	}
	return word;
}
//Song lyric functions
void Songlyric(int number)
{
	string drinkType;
	cout << "";
	cin >> drinkType;
	string word;
	word = numOfBottle(number);
	cout << word;
	if (number == 1)
		cout << "bottle of " + drinkType + "on the wall," << endl;
	else
		cout << "bottles of " + drinkType + " on the wall, " << endl;
	cout << word;
	if (number == 1)
		cout << "bottle of " + drinkType + ", " << endl;
	else
		cout << "bottles of " + drinkType + ", " << endl;
	cout << "Take one down, pass it around," << endl;

	number--;
	word = numOfBottle(number);
	cout << word;
	if (number == 1)
		cout << "bottles of " + drinkType + " on the wall, " << endl << endl;
	else
		cout << "bottles of " + drinkType + " on the wall, " << endl << endl;

	return;
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
