#include <iostream>
#include <string>
using namespace std;

/*
���ڿ�������ļ���&���ܳ���
*/
/*
int main() {
	char cProgramStatus; //���ڽ�����Ӧ״̬�ı���
	int iKeyNumber; //���ܻ����������Կ
	string strSentenceInput; //�������Ҫ���ܵ����ֻ���Ҫ���ܵ�����
	cout << "�˳�����ڿ�������ɶ�һ�����ȵ����ֽ��м��ܻ��һ�����Ľ��н��ܡ�\nĿǰֻ֧�ֶ�26��Ӣ����ĸ���м��ܻ��߽��ܣ������ַ��Ϳո񽫱��ֲ��䡣" << endl;
	cout << "����Ҫ���м��ܣ�������1" << endl << "����Ҫ���н��ܣ�������2" << endl << "Ҫ�˳���������3" << endl;
start:
	cin >> cProgramStatus;//��ȡ����Ӧ�ý����״̬
	if (cProgramStatus == '1') {
		cout << "���������������Կ��" << endl;
		cin >> iKeyNumber;
		iKeyNumber %= 26;
		cout << "��������Ҫ���ܵ����֣�" << endl;
		cin.ignore();
		getline (cin, strSentenceInput, '\n');
		int iLength = strSentenceInput.size();
		for (int i = 0; i <= iLength; i++) {
			if (strSentenceInput[i] >= 65 && strSentenceInput[i] <= 90 || strSentenceInput[i] >= 97 && strSentenceInput[i] <= 122) {
				if (strSentenceInput[i] + iKeyNumber > 122 || (90 < strSentenceInput[i] + iKeyNumber && strSentenceInput[i] + iKeyNumber < 97))
					strSentenceInput[i] = strSentenceInput[i] + iKeyNumber - 26;
				else
					strSentenceInput[i] += iKeyNumber;
			}
		}
		cout << "���ܺ���������Ϊ��\n" << strSentenceInput << endl;
		return 0;
	}
	else if (cProgramStatus == '2') {
		cout << "����������������Կ��" << endl;
		cin >> iKeyNumber;
		iKeyNumber %= 26;
		cout << "��������Ҫ���ܵ����ģ�" << endl;
		cin.ignore();
		getline(cin, strSentenceInput, '\n');
		int iLength = strSentenceInput.size();
		for (int i = 0; i <= iLength; i++) {
			if (strSentenceInput[i] >= 65 && strSentenceInput[i] <= 90 || strSentenceInput[i] >= 97 && strSentenceInput[i] <= 122) {
			if (strSentenceInput[i] - iKeyNumber < 65 || (90 < strSentenceInput[i] - iKeyNumber && strSentenceInput[i] - iKeyNumber < 97))
				strSentenceInput[i] = strSentenceInput[i] - iKeyNumber + 26;
			else
				strSentenceInput[i] -= iKeyNumber;
			}
		}
		cout << "���ܺ���������Ϊ��\n" << strSentenceInput << endl;
		return 0;
	}
	else if (cProgramStatus == '3')
		return 0;  //�˳�����
	else
		{ cerr << "����������������룺\n"; goto start; return -1; } //��������ȡ����״̬�׶�
}*/