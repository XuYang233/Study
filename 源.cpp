#include <iostream>
using namespace std;

int main()
{
	system("color 9c");
	cout << "����������롰��ʼѧϰ��" << endl;
	system("pause>nul");
	//ʹ�������system("");������ֱ�ӵ���cmd������
	//��int a = X�������������
	int a = 10;
	//�ڡ�cout����<< a �������������
	//���硾cout <<"XXX" << a << endl;��
	//��#define ������ ����ֵ�����ڶ��塰�곣����
	//��const �������� ������ = ����ֵ�����ڡ�����һ������Ϊ������
	//�á�cout << "Hello World" << endl;�����"Hello World"

	const auto ���� = "31��";



	cout << "����������롰sizeof�ؼ���ѧϰ��" << endl;
	system("pause>nul");







	short num1 = 10;
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;
	cout << "shortռ�ÿռ�Ϊ:  " << sizeof(num1) << endl;
	cout << "shortռ�ÿռ�Ϊ:  " << sizeof(num2) << endl;
	cout << "shortռ�ÿռ�Ϊ:  " << sizeof(num3) << endl;
	cout << "shortռ�ÿռ�Ϊ:  " << sizeof(num4) << endl;









	cout << "��������رա�" << endl;
	system("pause>nul");
	return 0;
}