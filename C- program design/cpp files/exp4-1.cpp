#include <iostream>
#include <cmath>
using namespace std;
#define pi 3.14159265358979323846264

double f1(double x);
double f2(double x, double y);

int main() {
	double x, y;
	cout << "Please input two numbers:" << endl;
	cin >> x >> y;
	cout << "for the first formula: f(x)=\\frac{1}{\\sqrt{2\\pi}}e^{-\\frac{x^{2}}{2}} \n" << f1(x) << endl << "for the second formula: f(x)=\\frac{1}{3}\\sin{(x^{2}+y^{2})}\\cos{(x+y)} \n" << f2(x, y) << endl;
	return 0;
}

double f1(double x) {
	double t;
	t = exp(-x * x / 2)*(1 / sqrt(2 * pi));
	return t;
}

double f2(double x, double y) {
	double t;
	t = sin(x * x + y * y) * cos(x + y) / 3;
	return t;
}
