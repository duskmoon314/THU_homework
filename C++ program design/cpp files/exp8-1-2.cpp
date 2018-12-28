#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int iKill(int);

int main() {
	clock_t start, finish;
	double time;
	start = clock();
	
	for (int i = 0; i < 1000; ++i) {
		cout << setw(3) << iKill(40) - 1;
	}
	
	finish = clock();
	time = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << "\nºÄÊ±" << 1000 * time << "ms\n";
	cout << "\nclock_tick = " << start << " " << finish;

	return 0;
}

int iKill(int n) {
	if (n == 1 || n == 2)return n;
	else if (n == 3)return 2;
	else if (n > 3) {
		int i = 3 + iKill(n - 1);
		if (i > n)i -= n;
		return i;
	}
	else return -1;
}