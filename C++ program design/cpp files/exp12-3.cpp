#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	char str[141];//140+'\0'
	char start, end, *pstart, *pend;
	bool found = false;
	cout << "please input:\nstart:";
	cin >> start;
	cout << "end:";
	cin >> end;
	cout << "input:\n";

	cin.ignore();//忽略前面输入的换行符
	cin.get(str, 141, '\n');//输入带空格的一句话
	pstart = &str[0];
	cout << "output:\n";
	//寻找表情符号
	while (pstart < &str[strlen(str) - 1]) {
		if (*pstart == start) {
			for (pend = pstart + 1; pend < &str[strlen(str)]; pend++) {
				if (*pend == start)
					pstart = pend;
				if (*pend == end) {
					found = true;
					//输出“表情”文字
					for (pstart += 1; pstart < pend; pstart++) {
						cout << *pstart;
					}
					cout << endl;
					pstart = pend + 1;//检索这个表情之后的转义符
					break;
				}
			}
		}
		++pstart;
	}
	if (found == false)cout << "FOUND NOTHING   NO EMOJI\n";

	return 0;
}