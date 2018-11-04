#include <iostream>
using namespace std;

int main() {
	int x, y, a, b, c;
	cout << "Please input numbers for x, y, a, b and c:" << endl;
	cin >> x >> y >> a >> b >> c;
	cout << "!x && x != 0     =     " << (!x && x != 0) << endl;
	cout << "!(x == a) && !(y == b) && 0     =     " << (!(x == a) && !(y == b) && 0) << endl;
	cout << "- 10 < a < -5 && b == c     =     " << (-10 < a < -5 && b == c) << endl;
	cout << "5>3 && 2 || 8 < 4 - !0     =     " << (5 > 3 && 2 || 8 < 4 - !0) << endl;
	cout << "!4 < y < 5 && 5 < b < 6     =     " << (!4 < y < 5 && 5 < b < 6) << endl;
	cout << "!x || x != 0     =     " << (!x || x != 0) << endl;
	cout << "3 < x < 5 || y>3 && y < 2     =     " << (3 < x < 5 || y>3 && y < 2) << endl;

	return 0;
}
