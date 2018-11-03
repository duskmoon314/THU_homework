#include <iostream>
using namespace std;

int main() {
	int x, y, z;
	cout << "please input x, y, z: (seperated by Space)\n";
	cin >> x >> y >> z;
	cout << "the output is: ";
	if ((x + y > z) && (y + z > x) && (x + z > y)){
		switch((x == y) + (x == z) + 1){
			case 1: cout << "Triangle"; break; //三条边互不相等
			case 2: cout << "Isosceles triangle"; break; //仅有两条边相等，等腰三角形
			case 3: cout << "Equilateral triangle"; break; //三条边都相等，等边三角形
		}
	}
	else
		cout << "Not triangle";

	return 0;
}
