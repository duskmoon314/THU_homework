#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	for (;;) {
		int integer, iNumOfDigits = 0, iEachDigit[5], i = 1;
		cout << "please input an integer:\n";
		cin >> integer;
		for (i; i < 10001; i++) {
			if (integer / i > 0) {
				iNumOfDigits++;
				i *= 10;
			}
			else break;
		}
		cout << "\nyour input: " << integer;
		cout << ",\nnum of difits: " << iNumOfDigits;
		for (int j = 0, k = 10000; j < 5, k > 0; j++) {
			iEachDigit[j] = integer / k;
			integer %= k;
			k /= 10;
		}
		cout << "\neach digit: ";
		for (int j = 5 - iNumOfDigits; j < 5; j++) {
			cout << iEachDigit[j] << ", ";
		}
		cout << "\nreversed order: ";
		for (int j = 4; j >= 5 - iNumOfDigits; j--) {
			cout << iEachDigit[j] << ", ";
		}
		cout << endl;
	}

	return 0;
}

/*
以下为采用字符数组的方法
int main() {
	char str[6];
	cout << "please input an integer:\n";
	cin >> str;
	cout << "\n";
	cout << "your input" << str << "\nnum of difits: " << strlen(str) << "\neach digit:";
	int i = 0;
	do {
		cout << setw(2) << str[i];
		i++;
	} while (str[i] != '\0');
	cout << "\nreversed order:";
	do {
		cout << setw(2) << str[i];
		i--;
	} while (i >= 0);

	return 0;
}*/