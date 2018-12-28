#include <iostream>
using namespace std;

int main() {
	int iNumberOfSheep;
	cout << "Please input the number of sheep: \n";
	cin >> iNumberOfSheep;
	int iWeightOfSheep[1024] = { 0 };
	for (int i = 0; i < iNumberOfSheep; ++i) {
		iWeightOfSheep[i] = rand();
	}

	for (int i = 0; i < 100; ++i) {
		for (int j = iNumberOfSheep - 1; j > i; --j) {
			if (iWeightOfSheep[j] > iWeightOfSheep[j - 1]) {
				iWeightOfSheep[j - 1] += iWeightOfSheep[j];
				iWeightOfSheep[j] = iWeightOfSheep[j - 1] - iWeightOfSheep[j];
				iWeightOfSheep[j - 1] -= iWeightOfSheep[j];
			}
		}
	}

	for (int i = 0; i < 100; ++i) {
		cout << iWeightOfSheep[i] << endl;
	}

	return 0;
}