#include <iostream>
using namespace std;

//可以利用引用修改参数，简化指针
//引用的本质是c++内部实现的指针常量

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

//引用作为函数的返回值
	//1、不要返回局部变量的引用
int& test01()
{
	int a = 10;//栈区
	return a;
}
	//2、函数的调用可以作为左值
int& test02()
{
	static int a = 10;//全局区
	return a;//返回的是a的引用，相当于a本身
}

void showValue(const int& val)//常量引用不被修改
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
//	//cout << "ref=" << ref << endl;//第一次是系统副本
//	//cout << "ref=" << ref << endl;//第二次已经是被释放的
//	//int& ref = test02();
//
//	//const int& ref2 = 10;//引用必须引用合法的内存，但是用const修饰可以
//	//相当于 int temp = 10; int &ref2 = temp; 
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