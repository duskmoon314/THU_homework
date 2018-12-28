#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double sum = 1;
	for (int i = 1; i < 1001; i++) {
		sum += log10(i);
	}
	cout << (int)sum;
	return 0;
}
