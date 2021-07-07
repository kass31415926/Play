#include <iostream>
#include <string>
using namespace std;


//函数调用符()也可以重载
//重载后的方式非常向函数的调用，也叫仿函数
//仿函数没有固定的写法，非常灵活

class MyPrint
{
public:
	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void MyPrint02(string test)
{
	cout << test << endl;
}

void test01()
{
	MyPrint myPrint;
	myPrint("hello world");
	MyPrint02("hello world");
}

int  main()
{
	test01();
	return 0;
}