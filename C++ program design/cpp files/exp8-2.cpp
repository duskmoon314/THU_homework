#include <iostream>
#include <ctime>
using namespace std;

int GoDown(int);

int main() {
	clock_t start, finish;
	double time;

	int n;
	for (;;) {

		cin >> n;

		start = clock();

		cout << GoDown(n) << endl;

		finish = clock();
		time = (double)(finish - start) / CLOCKS_PER_SEC;
		cout << "\nºÄÊ±" << 1000 * time << "ms\n\n";
	}

	return 0;
}

int GoDown(int n) {
	//*
	int a = 1, b = 2, c = 4;
	if (n == 1) return 1;
	else if (n == 2) return 2;
	else if (n == 3) return 4;
	else {
		for (int i = 4; i <= n; i++) {
			c = a + b + c;
			b = c - a - b;
			a = c - a - b;
		}
		return c;
	}
	//*/
	/*
	if (n == 1) return 1;
	else if (n == 2) return 2;
	else if (n == 3) return 4;
	else {
		int i = GoDown(n - 1) + GoDown(n - 2) + GoDown(n - 3);
		return i;
	}
	//*/
}