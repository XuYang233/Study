#include <iostream>
using namespace std;

int main()
{
	// ʹ��"//"��Ϊ��ע�������ʱ������н���
	//��1��5��Ϊ���ǰ����׼����һ���ڴ����ļ�ʱ������ǰ����
	system("color 9F");
	cout << "����������롰��ʼѧϰ��" << endl;
	system("pause>nul");
	//ʹ�������system("");������ֱ�ӵ���cmd������
	//�á�cout << "Hello World" << endl;�����"Hello World"
	cout << "Hello World" << endl;
	//��int a = X�������������
	int a = 10;
	//�ڡ�cout����<< a �������������
	//���硾cout <<"XXX" << a << endl;��
	cout << "����һ����" << a << "���Ƶ�" << endl;
	//��#define ������ ����ֵ�����ڶ��塰�곣����
	//��const �������� ������ = ����ֵ�����ڡ�����һ������Ϊ������

	const auto ���� = "31��";
	cout << "������" << ���� << endl;



	cout << "����������롰sizeof�ؼ���ѧϰ��" << endl;
	system("pause>nul");

	short num1 = 10;
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;
	cout << "shortռ�ÿռ�Ϊ:  " << sizeof(num1) << endl;
	cout << "intռ�ÿռ�Ϊ:  " << sizeof(num2) << endl;
	cout << "long ռ�ÿռ�Ϊ:  " << sizeof(num3) << endl;
	cout << "long longռ�ÿռ�Ϊ:  " << sizeof(num4) << endl;



	//����һ��һֱ�������
	cout << "��������رա�" << endl;
	system("pause>nul");
	return 0;
}