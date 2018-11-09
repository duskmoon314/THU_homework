#include <iostream>
using namespace std;

bool judge(int x);

int main() {
	for (int i = 11; i < 198; i++) {
		if (judge(i) && judge(i + 2)) {
			cout << i << " " << i + 2 << endl;
		}
	}

	return 0;
}

bool judge(int x) {
	int p[6] = { 2, 3, 5, 7, 11, 13 };
	for (int i = 0; i < 6; i++) {
		if (p[i] < x && x % p[i] == 0)return 0;
	}
	return 1;
}