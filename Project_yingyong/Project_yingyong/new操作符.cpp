#include <iostream>
using namespace std;

int* func()
{
	//�ڶ���������������
	//new���ظ��������͵�ָ��
	int* p = new int(10);
	return p;
}

void test01()
{
	int* p = func();
	cout << *p << endl;
	delete p;
	//���������ɳ���Ա�����ͷ�
}

void test02()
{
	int* arr = new int[10];

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷ�����
	delete[]arr;
}

//int main()
//{
//	test01();
//	test02();
//	return 0;
//}