#include <iostream>
//#include <cstring>
#include <cmath>
using namespace std;

unsigned int aton(const char str[]);
bool bCheckStr(const char str[]);//���������Ƿ�ֻ�����ֺ�'.'

int main() {
	char str[16];
	unsigned int temp;
	int result[32];
	cout << "please input an IP (according to IPv4)\n";
	cin >> str;
	if (bCheckStr(str)) {
		temp = aton(str);
		int i = 0;
		//������洢ת��Ϊ2����ʱ������
		do {
			result[i] = temp % 2;
			temp /= 2;
			++i;
		} while (temp != 0);
		//���������ת��Ϊ��׼��ʽ�Ķ�������
		for (--i; i >= 0; --i) {
			cout << result[i];
		}
	}
	else {
		cout << "0\n";
	}
	return 0;
}

unsigned int aton(const char str[]) {
	unsigned int result;
	int num[4] = { 0 };
	for (int i = 0, j = 0;; ++i) {
		if (str[i] == '\0') break;
		else if (str[i] < 46 || str[i] == 47 || str[i]>57) {

		}
		else if (str[i] == '.') {
			++j;
		}
		else {
			num[j] = 10 * num[j] + (str[i] - 48);
			if (num[j] > 255) {
				
				return 0;
			}
		}
	}
	result = 256 * 256 * 256 * num[0] + 256 * 256 * num[1] + 256 * num[2] + num[3];
	return result;
}

bool bCheckStr(const char str[]) {
	for (int i = 0;; ++i) {
		if (str[i] == '\0')break;
		else if (str[i] < 46 || str[i] == 47 || str[i] > 57) {
			return 0;
		}
	}
	return 1;
}