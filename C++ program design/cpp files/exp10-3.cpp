#include <iostream>
using namespace std;

void sort(char cStr[], int start, int end);


int main() {
	char str[1024];
	
	cout << "please input:\n";
	int i = 0;
	while((str[i]=getchar())!='\n'){
		if (str[i] < 65 || str[i]>122 || (str[i] > 90 && str[i] < 97)) {
			cout << "Input Error";
			return 0;
		}
		i++;
	}

	sort(str, 0, i - 1);
	for (int j = 0; j < i; ++j) {
		cout << str[j];
	}
	return 0;
}

void sort(char cStr[], int start, int end) {
	if (start >= end)return;
	int i = start, j = end, temp = cStr[j];
	while (i < j) {
		while (i < j&&cStr[i] >= temp) {
			++i;
		}
		cStr[j] = cStr[i];
		while (i < j&&cStr[j] <= temp) {
			--j;
		}
		cStr[i] = cStr[j];
	}
	cStr[j] = temp;
	sort(cStr, start, i - 1);
	sort(cStr, i + 1, end);
}
