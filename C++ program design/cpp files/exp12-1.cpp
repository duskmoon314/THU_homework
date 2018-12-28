#include <iostream>
#include <malloc.h>
using namespace std;

void input(char **p, int n);
void sort(char **p, int n);

int main() {
	int n;
	cout << "please input an integer n\n";
	cin >> n;
	//char **pp = new char*[n];
	char **pp = (char**)malloc(n * sizeof(char*));//申请n个存字符指针的空间
	cout << "please input stings, each one is finished with a '\\n' (an \"Enter\")\n";
	input(pp, n);
	sort(pp, n);
	cout << "\noutput:\n\n";
	for (int i = 0; i < n; ++i) {
		cout << *(pp + i) << endl;
		free(*(pp + i));
	}
	free(pp);//释放内存
	return 0;
}

void input(char **pstr, int n) {
	char str[80];
	char *p = &str[0];
	for (int i = 0; i < n; ++i) {
		cin.ignore();
		cin.get(str, 81, '\n');//输入整行的字符，读取空格
		//cin >> str; 空格就中断
		//*(pstr + i) = new char[strlen(str) + 1];
		*(pstr + i) = (char*)malloc((strlen(str) + 1) * sizeof(char));//申请相应长度的空间存放字符串
		int j = 0;
		for (j; j < strlen(str); ++j) {
			*(*(pstr + i) + j) = *(p + j);
		}
		*(*(pstr + i) + j) = '\0';
	}
}

void sort(char **p, int n) {
	//冒泡排序
	for (int i = 0; i < n - 1; ++i) {

		for (int j = 0; j < n - 1 - i; ++j) {
			if (strcmp(*(p + j), *(p + j + 1))>0) {
				char *temp = NULL;
				temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}
	}
}