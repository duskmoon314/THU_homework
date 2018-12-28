#include <iostream>
using namespace std;

int main() {
	int iStandBuffalo, iLieBuffalo, iOldBuffalo, count = 0;
	for (iOldBuffalo = 96; iOldBuffalo > 2; iOldBuffalo -= 3) {
		for (iStandBuffalo = 1; iStandBuffalo < 100 - iOldBuffalo; iStandBuffalo++) {
			iLieBuffalo = 100 - iOldBuffalo - iStandBuffalo;
			if (5 * iStandBuffalo + 3 * iLieBuffalo + iOldBuffalo / 3 == 100) {
				count++;
				cout << "站着的小水牛有： " << iStandBuffalo;
				cout << "头\n躺着的小水牛有： " << iLieBuffalo;
				cout << "头\n老水牛有： " << iOldBuffalo << "头\n\n";
			}
		}
	}
	cout << "共有" << count << "种情况";

	return 0;
}
