#include <iostream>
using namespace std;

//函数重载
//1、同一作用域下
//2、函数名称相同
//3、函数参数类型不同或者个数不同或者顺序不同
//4、返回值不是函数重载的条件
//5、引用作为重载条件
//6、函数重载碰到默认参数会出现二义性，尽量避免默认参数

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
	function(10);//int &a=10;不合法，不会调用int &a

	function2(a,10);
	return 0;
}