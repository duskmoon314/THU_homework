#include <iostream>
using namespace std;

int main() {
	int iNumber, iFeet;
	cout << "How many animals?\n";
	cin >> iNumber;
	cout << "And how many feet?\n";
	cin >> iFeet;

	if ((iFeet - iNumber * 2) % 2 == 0) {
		cout << "There are " << (iFeet - iNumber * 2) / 2 << " rabbits and " << iNumber - (iFeet - iNumber * 2) / 2 << " chickens.\n";
		return 0;
	}
	cout << "Input error\n";
	/*
	for (int i = 0; i <= iNumber; ++i) {
		if (4 * i + 2 * (iNumber - i) == iFeet) {
			cout << "There are " << i << " rabbits and " << iNumber - i << " chickens.\n";
			return 0;
		}
	}
	cout << "Input error\n";
	
	return 0;
}