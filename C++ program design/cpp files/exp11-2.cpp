#include <iostream>
using namespace std;

int del(int *p, int n);

int main() {
	int n, num[50] = { 0 };//未死记为0，死记为1
	
	cout << "how many people?\n";
	cin >> n;
	if (n > 50) {
		cout << "Error";
		return -1;
	}

	return del(num, n);
}

int del(int *p, int n) {
	int count = 0, i = 0;//count记录报数，i为编号
	while (count <= 3 * n - 3) { //一共杀掉n-1人，count最多记到3n-3
		i%=n;
		if (*(p + i) == 0) {
			++count;
			if (count % 3 == 0) {
				*(p + i) = 1;//将这个人从活置为死
			}
		}
		++i;
	}
	for (int i = 0; i < n; ++i) {
		if (*(p + i) == 0) {
			cout << "活着的人的编号为:" << i;
			return 0;
		}
	}
	return -1;
}