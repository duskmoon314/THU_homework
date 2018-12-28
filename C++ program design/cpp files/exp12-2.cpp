#include <iostream>
using namespace std;

int main() {
	int A[10][10];
	int (*p)[10] = A;

	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			*(*(p + i) + j) = 10 * i + j;
		}
	}

	for (int i = 0; i < 10; ++i) {
		int sum = 0;
		for (int j = 0; j < 10; ++j) {
			if (i + j >= 10)sum += *(*(p + j) + (i + j) % 10);
			else sum += *(*(p + j) + i + j);
		}
		cout << "第" << i << "对角线的元素之和为：" << sum << endl;
	}

	return 0;
}