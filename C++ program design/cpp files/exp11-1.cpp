#include <iostream>
using namespace std;

void arraySort(int *p, int start, int end);
void combine(int *p1, int *p2, int *pcombine, int length1, int length2);

int main() {
	int a[10], b[10], c[20];
	cout << "��������Ϊ��\n";
	//���������������������ӡ����Ļ��
	for (int i = 0; i < 20; ++i) {
		if (i < 10) {
			a[i] = rand();
			cout << a[i] << " ";
			if (i == 9)cout << endl;
		}
		else {
			b[i - 10] = rand();
			cout << b[i - 10] << " ";
		}
	}
	cout << endl;
	int *p1 = &a[0], *p2 = &b[0], *pc = &c[0];
	//���������������������
	arraySort(p1, 0, 9);
	arraySort(p2, 0, 9);
	//���ݺϲ�������
	combine(p1, p2, pc, 10, 10);
	//��ӡ�ϲ�������
	cout << "������Ϊ��\n";
	for (int i = 0; i < 20; ++i) {
		cout << *(pc + i) << " ";
	}

	return 0;
}

void arraySort(int *p, int start, int end) {
	//��������
	//������������Ƿ���ȷ
	if (start >= end)return;
	int i = start, j = end, temp = *(p + i);
	while (i < j) {
		//Ѱ�ұȹؼ�ֵС��
		while (i < j && *(p + j) >= temp) {
			--j;
		}
		*(p + i) = *(p + j);
		//Ѱ�ұȹؼ�ֵ���
		while (i < j&&*(p + i) <= temp) {
			++i;
		}
		*(p + j) = *(p + i);
	}
	*(p + i) = temp;
	//�ùؼ�ֵ����ֱ���С�ĺʹ��
	arraySort(p, start, i - 1);
	arraySort(p, i + 1, end);
}

void combine(int *p1, int *p2, int *pcombine, int length1, int length2) {
	for (int i = 0, j = 0, k = 0; i < length1 + length2; ++i) {
		while (j <= length1 && k <= length2) {
			//ѡȡ�������н�С�ķ���ϲ����������
			//��֤�������Ƿ����Ѿ����������
			if (k == length2) {
				*(pcombine + i) = *(p1 + j);
				++j;
				break;
			}
			else if (j == length1) {
				*(pcombine + i) = *(p2 + k);
				++k;
				break;
			}
			//�Ƚϴ�С����ֵ
			else if (*(p1 + j) < *(p2 + k)) {
				*(pcombine + i) = *(p1 + j);
				++j;
				break;
			}
			else if(*(p1 + j) >= *(p2 + k)){
				*(pcombine + i) = *(p2 + k);
				++k;
				break;
			}
		}
	}
}