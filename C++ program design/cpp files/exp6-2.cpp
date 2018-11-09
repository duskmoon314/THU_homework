#include <iostream>
using namespace std;

int main() {
	int n;
	for (;;) {
		cout << "input n: ";
		cin >> n;
		cout << n << endl;
		cout << "output:\n";
		if (n % 2 == 0 || n < 3) {
			cout << "Input Error\n\n";
		}
		else {
			for (int i = 1; i <= (n + 1) / 2; i++) {
				for (int j = 1; j <= (n - (2 * i - 1)) / 2; j++) {
					cout << " ";
				}
				for (int k = 1; k <= 2 * i - 1; k++) {
					cout << "*";
				}
				cout << endl;
			}
			for (int i = (n + 1) / 2 + 1; i <= n; i++) {
				int t = n + 1 - i;
				for (int j = 1; j <= (n - (2 * t - 1)) / 2; j++) {
					cout << " ";
				}
				for (int k = 1; k <= 2 * t - 1; k++) {
					cout << "*";
				}
				cout << endl;
			}
		}
	}
	return 0;
}