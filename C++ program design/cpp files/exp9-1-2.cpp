#include <iostream>
using namespace std;

int main() {
	int iNumberOfSheep, temp;
	cout << "Please input the number of sheep: \n";
	cin >> iNumberOfSheep;
	int iWeightOfSheep[1024] = { 0 }, iHeavy[100] = { 0 };
	for (int i = 0; i < iNumberOfSheep; ++i) {
		iWeightOfSheep[i] = rand();
	}

	for (int i = 0; i < 100; ++i) {
		for (int j = 0; j < iNumberOfSheep; ++j) {
			if (iHeavy[i] < iWeightOfSheep[j]) {
				iHeavy[i] = iWeightOfSheep[j];
				temp = j;
			}
		}
		iWeightOfSheep[temp] = 0;
	}
	for (int i = 0; i < 100; ++i) {
		cout << iHeavy[i] << endl;
	}
	
	return 0;
}