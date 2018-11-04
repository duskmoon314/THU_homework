#include <iostream>
#include <string>
using namespace std;

int main() {
	//为方便使用不同类型存储数据，变量名声明为 phoneNumber
	//采用long long类型
	//long long phoneNumber;

	//采用字符数组char[]
	//char phoneNumber[12];
	
	//采用string类型
	//string phoneNumber;

	//采用unsigned long long类型
	//unsigned long long phoneNumber;

	//采用double类型
	double phoneNumber;
	//long double phoneNumber;

	//采用long float类型
	//long float phoneNumber;

	cout.precision(0);
	cin >> phoneNumber;
	cout << fixed << phoneNumber;

	return 0;
}
