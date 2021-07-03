#include <iostream>
using namespace std;

int* func()
{
	//在堆区创建整形数据
	//new返回该数据类型的指针
	int* p = new int(10);
	return p;
}

void test01()
{
	int* p = func();
	cout << *p << endl;
	delete p;
	//堆区数据由程序员管理释放
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
	//释放数组
	delete[]arr;
}

//int main()
//{
//	test01();
//	test02();
//	return 0;
//}