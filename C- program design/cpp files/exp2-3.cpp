#include <iostream>
#include <string>
using namespace std;

/*
基于凯撒密码的加密&解密程序
*/
/*
int main() {
	char cProgramStatus; //用于进入相应状态的变量
	int iKeyNumber; //加密或解密所用密钥
	string strSentenceInput; //输入的需要加密的文字或需要解密的密文
	cout << "此程序基于凯撒密码可对一定长度的文字进行加密或对一段密文进行解密。\n目前只支持对26个英文字母进行加密或者解密，其余字符和空格将保持不变。" << endl;
	cout << "若需要进行加密，请输入1" << endl << "若需要进行解密，请输入2" << endl << "要退出，请输入3" << endl;
start:
	cin >> cProgramStatus;//获取程序应该进入的状态
	if (cProgramStatus == '1') {
		cout << "请输入加密所用密钥：" << endl;
		cin >> iKeyNumber;
		iKeyNumber %= 26;
		cout << "请输入需要加密的文字：" << endl;
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
		cout << "加密后所得密文为：\n" << strSentenceInput << endl;
		return 0;
	}
	else if (cProgramStatus == '2') {
		cout << "请输入密文所用密钥：" << endl;
		cin >> iKeyNumber;
		iKeyNumber %= 26;
		cout << "请输入需要解密的密文：" << endl;
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
		cout << "解密后所得文字为：\n" << strSentenceInput << endl;
		return 0;
	}
	else if (cProgramStatus == '3')
		return 0;  //退出程序
	else
		{ cerr << "输入错误，请重新输入：\n"; goto start; return -1; } //返回至获取程序状态阶段
}*/
