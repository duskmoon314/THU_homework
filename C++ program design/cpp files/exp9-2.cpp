#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	double A[4][4] = { 1.1161, 0.1254, 0.1397, 0.1490, 0.1582, 1.1675, 0.1768, 0.1871, 0.2368, 0.2471, 0.2568, 1.2671, 0.1968, 0.2071, 1.2168, 0.2271 };
	double b[4] = { 1.5471, 1.6471, 1.8471, 1.7471 };
	double x[4] = { 0 };
	double U[4][5];
	
	cout.setf(ios::showpoint);
	cout.flags(ios::fixed);
	cout.precision(4);

	cout << "MAT A =\n";
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			cout << setw(9) << A[i][j];
		}
		cout << endl;
	}
	cout << "MAT B =\n";
	for (int j = 0; j < 4; ++j) {
		cout << setw(9) << b[j];
	}
	cout << endl;

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 5; ++j) {
			if (j == 4)U[i][j] = b[i];
			else U[i][j] = A[i][j];
		}
	}

	for (int k = 0; k < 3; ++k) {
		//列选主元
		for (int i = k + 1; i < 4; ++i) {
			if (U[i][k] > U[k][k]) {
				for (int j = 0; j < 5; ++j) {
					U[k][j] += U[i][j];
					U[i][j] = U[k][j] - U[i][j];
					U[k][j] -= U[i][j];
				}
			}
		}
		//归一化
		for (int j = k + 1; j < 5; ++j) {
			U[k][j]/= U[k][k];
		}
		//消去
		for (int i = k + 1; i < 4; ++i) {
			for (int j = k + 1; j < 4; ++j) {
				U[i][j] -= U[i][k] * U[k][j];

			}
			U[i][4] -= U[i][k] * U[k][4];
		}
	}
	cout << endl;
	x[3] = U[3][4] / U[3][3];
	for (int i = 2; i >= 0; --i) {
		double sum = 0;
		for (int j = i + 1; j < 4; ++j) {
			sum += U[i][j] * x[j];
		}
		x[i] = U[i][4] - sum;
	}
	for (int i = 0; i < 4; ++i) {
		cout << "x(" << i + 1 << ")=" << x[i] << endl;
	}
	
	return 0;
}
