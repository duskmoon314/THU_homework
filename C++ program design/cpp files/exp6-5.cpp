#include <iostream>
using namespace std;

int k(int n);
int S(int n);

int main() {
	for (;;) {
		cout << "input n: ";
		int n;
		cin >> n;
		cout << "S(n) = " << S(n) << "\n\n";
	}
	return 0;
}

int k(int n) {
	int s = n;
	for (int i = 2; i < n; i++) {
		s *= i;
	}
	return s;
}

int S(int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		s += k(i);
	}
	return s;
}