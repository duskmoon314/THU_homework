#include <iostream>
using namespace std;

int del(int *p, int n);

int main() {
	int n, num[50] = { 0 };//δ����Ϊ0������Ϊ1
	
	cout << "how many people?\n";
	cin >> n;
	if (n > 50) {
		cout << "Error";
		return -1;
	}

	return del(num, n);
}

int del(int *p, int n) {
	int count = 0, i = 0;//count��¼������iΪ���
	while (count <= 3 * n - 3) { //һ��ɱ��n-1�ˣ�count���ǵ�3n-3
		i%=n;
		if (*(p + i) == 0) {
			++count;
			if (count % 3 == 0) {
				*(p + i) = 1;//������˴ӻ���Ϊ��
			}
		}
		++i;
	}
	for (int i = 0; i < n; ++i) {
		if (*(p + i) == 0) {
			cout << "���ŵ��˵ı��Ϊ:" << i;
			return 0;
		}
	}
	return -1;
}