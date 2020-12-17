#include <iostream>
using namespace std;
#include <string>//使用C++时，要包含这个头文件

int main()
{
	// 使用"//"即为标注，在输出时不会进行解析
	//从1到5行为编程前输入准备，一般在创建文件时可以提前输入
	system("color 9F");

	//使用这个【system("");】可以直接调用cmd中命令
	//用【cout << "Hello World" << endl;】输出"Hello World"
	cout << "Hello World" << endl;
	//【int a = X】用于输入整型变量
	int z = 10;
	//在【cout输入<< a 】可以输出变量
	//例如【cout <<"XXX" << a << endl;】
	cout << "电脑一般是" << a << "进制的" << endl;
	//【#define 常量名 常量值】用于定义“宏常量”
	//【const 数据类型 常量名 = 常量值】用于“修饰一个变量为常量”

	const auto 七月 = "31天";
	cout << "七月有" << 七月 << endl;

	short num1 = 10;
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;
	cout << "short占用空间为:  " << sizeof(num1) << endl;
	cout << "int占用空间为:  " << sizeof(num2) << endl;
	cout << "long 占用空间为:  " << sizeof(num3) << endl;
	cout << "long long占用空间为:  " << sizeof(num4) << endl;

	//单字符变量设置（可在后面查看ASCII编码）
	char ch = 'a';
	cout << ch << endl;
	
	//单精度float占用4字节空间，7位有效数字
	float f1 = 3.14f;
	//双精度double占用8字节空间，15-16位有效数字
	double d1 = 3.14;

	//输出f1与d1的值
	cout << "单精度f1=" << f1 << endl;
	cout << "双精度d1=" << d1 << endl;
	//输出f1与d1占用空间大小
	cout << "float 单精度数值字节数为" << sizeof(f1) << endl;
	cout << "double 双精度数值字节数为" << sizeof(d1) << endl;
	//科学计数法
	float f2 = 3e2; //3* 10 ^ 2
	cout << "单精度f2科学计数法表示为" << d2 << endl;
		
	//查看char字符型变量所占内存
	cout << "char字符型变量所占内存：" << sizeof(char) << endl;
	
	//布尔数据类型bool
	bool b=false //当bool为false或0时，bool为0，否则为1(true)
		cout << "b=" << b << endl;

	//字符型变量对应ASCII编码
	// a - 97
	// A - 65
	cout << (int)ch << endl;

	//反斜杠 \n

	cout << "Hello World!\n";
	
	//cin用于数据输入
	cout << "字符型变量a 此时数据为" << a << endl;
	cout << "请给字符型变量 a 赋值" << endl; //可给其他类型变量赋值（如整型变量z,浮点型变量f,布尔类型b)
	cin >> a :



	//此行一般一直置于最后
	cout << "按任意键关闭”" << endl;
	system("pause>nul");
	return 0;
}
