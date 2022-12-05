#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
	unsigned int numCases;
	std::cin >> numCases;
	std::cout << "/n";

	for (int i = 0; i < numCases; i++) {//numcases is how many elections we have
		string candidate[20];
		string ballot;
		int numCand;
		std::cin >> numCand;//
		if (numCand > 20) numCand = 20;
		int numVoters=0;
		while (numVoters < 1000) {
			numVoters++;
			for (int j = 0; j < numCand; j++) {
				
			}
		}

	}
	
}

int countVotes() {

}