#include <iostream>
#include <cmath>
using namespace std;


double f(double);
double S(double, double, int);

int main() {
	double answer = 1.4936482656;
	for (;;) {
		cout << "\nPlease input m:\n";
		int m;
		cin >> m;
		cout << S(-1, 1, m);
		if (fabs(S(-1, 1, m) - answer) < 0.0001)cout << "计算精度符合要求\n";
	}
	
	return 0;
}

double f(double x) {
	double dfResult = exp(-x * x);
	return dfResult;
}

double S(double a, double b, int m) {
	double h = (b - a) / m;
	double sum = 0;
	for (int k = 1; k < m; k++) {
		sum += f(a + k * h);
	}
	double dSResult = h * ((f(a) + f(b)) / 2 + sum);
	return dSResult;
}