#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;


int main() {
	clock_t start, finish;
	double time;
	start = clock();

	for (int i = 0; i < 1000; ++i) {
		int iPlace = 0;
		for (int i = 2; i < 41; ++i) {
			iPlace = (iPlace + 3) % i;
		}
		cout << iPlace << " ";
	}
	
	finish = clock();
	time = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << "\nºÄÊ±" << 1000*time << "ms\n";
	cout << "\nclock_tick = " << start << " " << finish;
	return 0;
}