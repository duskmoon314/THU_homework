#include <iostream>
using namespace std;

void arraySort2(int *p[], int start, int end);

int main() {
	int a[10];
	cout << "Please input 10 different numbers:\n";
	int *pa[10];
	for (int i = 0; i < 10; ++i) {
		cin >> a[i];
		pa[i] = &a[i];
	}
	int *p = pa[0];//��¼�������ʼ��ַ
	arraySort2(pa, 0, 9);//��ָ�������������
	for (int i = 0; i < 10; ++i) {
		cout << *pa[i] << " ";//��������е�ֵ
	}
	cout << endl;
	for (int i = 0; i < 10; ++i) {
		cout << pa[i]-p << " ";//����±�
	}

}

void arraySort2(int *p[], int start, int end) {
	//��������
	//������������Ƿ���ȷ
	if (start >= end)return;
	int i = start, j = end, *temp = p[i];
	while (i < j) {
		//Ѱ�ұȹؼ�ֵС��
		while (i < j && *p[j] >= *temp) {
			--j;
		}
		p[i] = p[j];
		//Ѱ�ұȹؼ�ֵ���
		while (i < j&&*p[i] <= *temp) {
			++i;
		}
		p[j] = p[i];
	}
	p[i] = temp;
	//�ùؼ�ֵ����ֱ���С�ĺʹ��
	arraySort2(p, start, i - 1);
	arraySort2(p, i + 1, end);
}