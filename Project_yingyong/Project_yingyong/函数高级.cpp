#include <iostream>
using namespace std;

//函数申明和函数实现只能有一个默认值
int func(int a , int b );

int func(int a=10, int b=20)
{
	return a + b;
}

//占位参数，调用函数时必须填补占位参数，只写数据类型
void func2(int a,int)
{
	cout << "this is func" << endl;
}

//int main()
//{
//	cout << func();
//	func2(10,10);
//	return 0;
//}