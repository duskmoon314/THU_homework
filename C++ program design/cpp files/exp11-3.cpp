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
	int *p = pa[0];//记录数组的起始地址
	arraySort2(pa, 0, 9);//对指针数组进行排序
	for (int i = 0; i < 10; ++i) {
		cout << *pa[i] << " ";//输出数组中的值
	}
	cout << endl;
	for (int i = 0; i < 10; ++i) {
		cout << pa[i]-p << " ";//输出下标
	}

}

void arraySort2(int *p[], int start, int end) {
	//快速排序
	//检查排序区间是否正确
	if (start >= end)return;
	int i = start, j = end, *temp = p[i];
	while (i < j) {
		//寻找比关键值小的
		while (i < j && *p[j] >= *temp) {
			--j;
		}
		p[i] = p[j];
		//寻找比关键值大的
		while (i < j&&*p[i] <= *temp) {
			++i;
		}
		p[j] = p[i];
	}
	p[i] = temp;
	//让关键值两侧分别是小的和大的
	arraySort2(p, start, i - 1);
	arraySort2(p, i + 1, end);
}