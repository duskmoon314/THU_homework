#include <iostream>
using namespace std;

int main() {
	int sheep[7], price;
	sheep[0] = 1;
	for (int month = 1; month < 7; month++) {
		sheep[month] = sheep[month - 1] * 2;
		price = sheep[month] * 10;
		cout << "month " << month << ": sheep " << sheep[month] << ", price " << price << endl;
	}
	return 0;
}
