#include <iostream>
using namespace std;

//��������
//1��ͬһ��������
//2������������ͬ
//3�������������Ͳ�ͬ���߸�����ͬ����˳��ͬ
//4������ֵ���Ǻ������ص�����
//5��������Ϊ��������
//6��������������Ĭ�ϲ�������ֶ����ԣ���������Ĭ�ϲ���

void function()
{
	cout << "function()" << endl;
}

//void function(int a)
//{
//	cout << "function(int a)" << endl;
//}

void function(double a)
{
	cout << "function(double a)" << endl;
}

void function(int &a)
{
	cout << "function(int &a)" << endl;
}

//
void function(const int &a)
{
	cout << "function(const int&a)" << endl;
}

void function2(int a,int b=10)
{
	cout << "function2(int a,int b=10)" << endl;
}

void function2(int a)
{
	cout << "function2(int a)" << endl;
}

int main()
{
	int a = 10;
	function(a);
	function(10);//int &a=10;���Ϸ����������int &a

	function2(a,10);
	return 0;
}