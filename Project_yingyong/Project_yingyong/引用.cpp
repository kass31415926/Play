#include <iostream>
using namespace std;

//�������������޸Ĳ�������ָ��
//���õı�����c++�ڲ�ʵ�ֵ�ָ�볣��

void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//������Ϊ�����ķ���ֵ
	//1����Ҫ���ؾֲ�����������
int& test01()
{
	int a = 10;//ջ��
	return a;
}
	//2�������ĵ��ÿ�����Ϊ��ֵ
int& test02()
{
	static int a = 10;//ȫ����
	return a;//���ص���a�����ã��൱��a����
}

void showValue(const int& val)//�������ò����޸�
{
	cout << "val = " << val;
}

//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	////swap01(a, b);
//	////swap02(&a, &b);
//	//swap03(a, b);
//	//cout << "a= " << a << endl;
//	//cout << "b= " << b << endl;
//
//	//int& ref = test01();
//	//cout << "ref=" << ref << endl;//��һ����ϵͳ����
//	//cout << "ref=" << ref << endl;//�ڶ����Ѿ��Ǳ��ͷŵ�
//	//int& ref = test02();
//
//	//const int& ref2 = 10;//���ñ������úϷ����ڴ棬������const���ο���
//	//�൱�� int temp = 10; int &ref2 = temp; 
//
//	int a = 100;
//
//	showvalue(a);
//	//cout << "ref=" << ref << endl;
//	//cout << "ref=" << ref << endl;
//	//test02() = 1000;
//	//cout << "ref=" << ref << endl;
//	//cout << "ref=" << ref << endl;
//
//	system("pause");
//	return 0;
//}