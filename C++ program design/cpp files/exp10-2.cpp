#include <iostream>
#include <string>
using namespace std;

int main() {
	char str[1024] = { 0 }, vowel[1024][2];
	int i = 0, j = 0;
	cout << "Please input:\n";
	while ((str[i] = getchar()) != '\n') {
		if (str[i] < 97 || str[i]>122) {
			cout << "Input Error";
			return 0;
		}
		if (str[i] == 97 || str[i] == 101 || str[i] == 105 || str[i] == 111 || str[i] == 117) {
			vowel[j][0] = i;
			vowel[j++][1] = str[i];
		}
		i++;
	}

	for (int k = 0; k < j; ++k) {
		str[vowel[k][0]] = vowel[j - k - 1][1];
	}
	for (int k = 0; k < i; ++k) {
		cout << str[k];
	}

	return 0;
}