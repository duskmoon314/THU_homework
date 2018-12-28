#include <iostream>
using namespace std;

int check[10] = { 0 };

bool Check_Repeat(int x);
bool Check_Num(int);


int main() {
	int a = 123456, a2, a3, temp;
	int b[6];
	

	for (; a < 333334; a++) {
		temp = a;
		if (Check_Repeat(a)) {
			for (int i = 0; i < 10; i++) {
				check[i] = 0;
			}
			a2 = 2 * a;
			a3 = 3 * a;
			for (int i = 5; i >= 0; i--) {
				b[i] = a % 10;
				a /= 10;
			}
			for (int i = 0; i < 6; i++) {
				check[b[i]] = 1;
			}
			if (Check_Repeat(a2) && Check_Repeat(a3) && Check_Num(a2) && Check_Num(a3)) {
				cout << temp << endl;
			}
		}
		a = temp;
	}
	return 0;
}

bool Check_Repeat(int x) {
	int temp[6] = { 0 };
	for (int i = 5; i >= 0; i--) {
		temp[i] = x % 10;
		x /= 10;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 6; j++) {
			if (temp[i] == temp[j])return 0;
		}
	}
	return 1;
}

bool Check_Num(int x) {
	for (int i = 0; i < 6; i++) {
		if (check[x % 10] != 1) { return 0; }
		x /= 10;
	}
	return 1;
}