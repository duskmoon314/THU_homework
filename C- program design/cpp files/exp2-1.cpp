#include <iostream> //1、原代码缺少#，用""代替<>，语法错误，且后面cin、cout等为未声明标识符；iostream.h为继承C的库，VS报错；
using namespace std; //2、原代码未使用;，语句不完整

int main() {
	int x1, x2;
	unsigned y;
	char c1, c2; //3、原代码未声明c2，后面需调用c2；注意：c1，c2为字符型变量
	x1 = 65535;
	x2 = x1 + 5;
	cout << "enter y :"; //4、cin不能输出一个字符串同时获取输入
	cin >> y; //5、声明的变量是y，不是y1，否则无法运行；且需要有; 表示语句结束
	c1 = 97; //此处是给c1赋值ASCII码97，即'a'
	c2 = 'A'; //给c2赋值字符A
	c2 = c2 + 32; //将'A'的ASCII码加上32后，得到'a'
	cout << "x1 = " << x1; //输出x1的值65535
	cout << "x2 = " << x2; //输出x2的值65540
	cout << " y = " << (y + 15); //输出y+15的值
	cout << "c1 = " << c1;//输出a
	cout << "c2 = " << c2;//6、输出a，该语句如果没有;，语句未结束，无法编译通过
	//7、以上引号都需使用英文半角符号而非中文全角符号，否则无法编译通过
	return(0); //return(0)也可以写成 return 0;
}
