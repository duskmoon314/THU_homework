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

	cin.ignore();//����ǰ������Ļ��з�
	cin.get(str, 141, '\n');//������ո��һ�仰
	pstart = &str[0];
	cout << "output:\n";
	//Ѱ�ұ������
	while (pstart < &str[strlen(str) - 1]) {
		if (*pstart == start) {
			for (pend = pstart + 1; pend < &str[strlen(str)]; pend++) {
				if (*pend == start)
					pstart = pend;
				if (*pend == end) {
					found = true;
					//��������顱����
					for (pstart += 1; pstart < pend; pstart++) {
						cout << *pstart;
					}
					cout << endl;
					pstart = pend + 1;//�����������֮���ת���
					break;
				}
			}
		}
		++pstart;
	}
	if (found == false)cout << "FOUND NOTHING   NO EMOJI\n";

	return 0;
}