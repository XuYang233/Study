#include <iostream>
using namespace std;

int main()
{
	system("color 9c");
	cout << "按任意键进入“初始学习”" << endl;
	system("pause>nul");
	//使用这个【system("");】可以直接调用cmd中命令
	//【int a = X】用于输入变量
	int a = 10;
	//在【cout输入<< a 】可以输出变量
	//例如【cout <<"XXX" << a << endl;】
	//【#define 常量名 常量值】用于定义“宏常量”
	//【const 数据类型 常量名 = 常量值】用于“修饰一个变量为常量”
	//用【cout << "Hello World" << endl;】输出"Hello World"

	const auto 七月 = "31天";



	cout << "按任意键进入“sizeof关键字学习”" << endl;
	system("pause>nul");







	short num1 = 10;
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;
	cout << "short占用空间为:  " << sizeof(num1) << endl;
	cout << "short占用空间为:  " << sizeof(num2) << endl;
	cout << "short占用空间为:  " << sizeof(num3) << endl;
	cout << "short占用空间为:  " << sizeof(num4) << endl;









	cout << "按任意键关闭”" << endl;
	system("pause>nul");
	return 0;
}