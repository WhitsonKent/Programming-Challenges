#include <iostream>
#include <math.h>
#include<fstream>
using namespace std;

bool findFriend(int x1, int y1, int x2, int y2, int xa, int ya,int r);
int main()
{
	//ofstream myfile;
	//myfile.open("output.txt");
	static int coords[100000][4];
	int n, q;
	int xa, ya;
	int r;
	int pf = 0;//pf is short for potential friends making a bird call
	cin >> n >> q;
	cin >> xa >> ya;
	xa = -1 * xa;
	//get neighborhood coordinates
	for (int i = 0; i < n; i++) {
		cin >> coords[i][0] >> coords[i][1] >> coords[i][2] >> coords[i][3];
		coords[i][0] = coords[i][0] * -1;
		coords[i][2] = coords[i][2] * -1;
	}
	//takes distance of polly from call
	for (int i = 0; i < q; i++) {
		pf = 0;
		cin >> r;
		for (int j = 0; j < n; j++) {
			if (findFriend(coords[j][0], coords[j][1], 
				coords[j][2], coords[j][3],xa, ya, r)) pf++;
		}
		cout << pf << "\n";
		//myfile << pf << "\n";
	}
	//myfile.close();
}

//draws a circle about xa,ya using r and checks if the point described 
//by double x and y lies in between the points described by
// x1,y1 and x2,y2
bool findFriend(int x1, int y1, int x2, int y2, int xa, int ya, int r)
{
	int hold;
	double y;
	double x;
	for (x = xa-r; x <= xa+r; x += 0.5) {
		y = ya + sqrt(r * r - (x - xa) * (x - xa));
		if ((y1 <= y && y <= y2) || (y1 >= y && y >= y2)) {
			if ((x1 <= x && x <= x2) || (x1 >= x && x >= x2)) return true;
		}
		y = ya - sqrt(r * r - (x - xa) * (x - xa));
		if ((y1 <= y && y <= y2) || (y1 >= y && y >= y2)) {
			if ((x1 <= x && x <= x2) || (x1 >= x && x >= x2)) return true;
		}
	}
	return false;
}

