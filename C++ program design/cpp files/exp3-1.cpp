#include <iostream>
using namespace std;

int main() {
	cout << "the size of short:" << sizeof(short) << endl << "the size of int:" << sizeof(int) << endl;
	cout << "the size of long:" << sizeof(long) << endl << "the size of unsigned short:" << sizeof(unsigned short) << endl;
	cout << "the size of unsigned int:" << sizeof(unsigned int) << endl << "the size of unsigned long:" << sizeof(unsigned long) << endl;
	cout << "the size of char:" << sizeof(char) << endl << "the size of bool:" << sizeof(bool) << endl;
	cout << "the size of double:" << sizeof(double) << endl << "the size of float:" << sizeof(float) << endl;
	
	float fTest = 0;
	int iNum = 0, iTest = 3;
	fTest = 1.0 / 3.0;
	for (int i = 1;; i++) {
		fTest *= 10;
		if ((int)(fTest - iTest) == 0) { iNum++; iTest = iTest * 10 + 3; }
		else break;
	}
	fTest = 1.0 / 3.0;
	int iNum2 = 0;
	for (int i = 1;; i++) {
		fTest *= 10;
		int iTest2 = (int)fTest;
		if ((int)(fTest - iTest2) == 0) iNum2++;
		else break;
	}
	fTest = 1.0 / 3.0;
	cout << "在VS中float类型保留的精确小数位数为：" << iNum << endl;
	cout << "在VS中float类型默认总共保存的小数位数为：" << iNum2 << endl;

	return 0;
}
