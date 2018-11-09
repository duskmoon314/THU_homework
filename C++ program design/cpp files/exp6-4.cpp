#include <iostream>
using namespace std;

int main() {
	double n = 11;
	for (n;; n++) {
		if (((n + 1) / 2 - (int)((n + 1) / 2)) == 0) {
			if (((n + 1) / 6 - (int)((n + 1) / 6)) == 0) {
				if (((n + 1) / 12 - (int)((n + 1) / 12)) == 0) {
					if (((n + 1) / 20 - (int)((n + 1) / 20)) == 0) {
						if (((n - 4) / 5 - 11) == 0) {
							int t = n, fk = (n + 1) / 2, sk = (n + 1) / 6, tk = (n + 1) / 12, fok = (n + 1) / 20;
							cout << "total:      " << n << endl;
							cout << "first kid:  " << (n + 1) / 2 << endl;
							cout << "second kid: " << (n + 1) / 6 << endl;
							cout << "third kid:  " << (n + 1) / 12 << endl;
							cout << "fourth kid: " << (n + 1) / 20 << endl;
							cout << "fifth kid:  " << 11 << endl;
							break;
						}
					}
				}
			}
		}
	}
	return 0;
}