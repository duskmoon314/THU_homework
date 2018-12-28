#include <iostream>
using namespace std;

int main() {
	int a = 1800, b = 760, sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += (a - i)*(b - i);
	}
	cout << sum;
	return 0;
}
