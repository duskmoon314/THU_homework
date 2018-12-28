#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "please input an integer bigger than 0:\n";
	cin >> n;
	int **matrix = (int**)malloc(n * sizeof(int*));
	cout << "please input entries in a matrix which is n*n:\n";
	for (int i = 0; i < n; ++i) {
		*(matrix + i) = (int*)malloc(n * sizeof(int));
		for (int j = 0; j < n; ++j) {
			cin >> *(*(matrix + i) + j);
		}
	}

	int i = 0, j = 0;
	while (1) {
		cout << *(*(matrix + i) + j) << " ";
		if (i == n - 1 && j == n - 1)break;
		if ((i + j) % 2 == 0) {
			if (i > 0) {
				--i;
				if (j < n - 1)++j;
				else i += 2;
			}
			else {
				if (j < n - 1)++j;
				else ++i;
			}
		}
		else {
			if (j > 0) {
				--j;
				if (i < n - 1)++i;
				else j += 2;
			}
			else {
				if (i < n - 1)++i;
				else ++j;
			}
		}
	}

	for (int i = 0; i < n; ++i) {
		free(*(matrix + i));
	}
	free(matrix);

	return 0;
}