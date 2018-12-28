#include <iostream>
using namespace std;

void arraySort(int *p, int start, int end);
void combine(int *p1, int *p2, int *pcombine, int length1, int length2);

int main() {
	int a[10], b[10], c[20];
	cout << "排序样例为：\n";
	//用随机函数生成样例并打印在屏幕上
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
	//对两个样例进行排序操作
	arraySort(p1, 0, 9);
	arraySort(p2, 0, 9);
	//数据合并并排序
	combine(p1, p2, pc, 10, 10);
	//打印合并后数据
	cout << "排序结果为：\n";
	for (int i = 0; i < 20; ++i) {
		cout << *(pc + i) << " ";
	}

	return 0;
}

void arraySort(int *p, int start, int end) {
	//快速排序
	//检查排序区间是否正确
	if (start >= end)return;
	int i = start, j = end, temp = *(p + i);
	while (i < j) {
		//寻找比关键值小的
		while (i < j && *(p + j) >= temp) {
			--j;
		}
		*(p + i) = *(p + j);
		//寻找比关键值大的
		while (i < j&&*(p + i) <= temp) {
			++i;
		}
		*(p + j) = *(p + i);
	}
	*(p + i) = temp;
	//让关键值两侧分别是小的和大的
	arraySort(p, start, i - 1);
	arraySort(p, i + 1, end);
}

void combine(int *p1, int *p2, int *pcombine, int length1, int length2) {
	for (int i = 0, j = 0, k = 0; i < length1 + length2; ++i) {
		while (j <= length1 && k <= length2) {
			//选取两数组中较小的放入合并后的数组中
			//验证两数组是否有已经输出结束的
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
			//比较大小并赋值
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