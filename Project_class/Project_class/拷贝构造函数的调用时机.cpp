#include <iostream>
using namespace std;

//拷贝构造函数的调用
//使用一个已经创建完毕的对象来初始化一个新对象
//值传递的方式给函数参数值
//以值方式返回局部对象

class Person01
{
public:
	int m_Age;
public:
	Person01()
	{
		cout << "构造函数" << endl;
	}
	Person01(int age)
	{
		m_Age = age;
		cout << "有参构造函数" << endl;
	}
	Person01(const Person01& p)
	{
		m_Age = p.m_Age;
		cout << "拷贝构造函数" << endl;
	}
	~Person01()
	{
		cout << "析构函数" << endl;
	}
};

void test02() {
	Person01 p1(20);
	Person01 p2(p1);
	cout << "p2的年龄：" << p2.m_Age << endl;
}

void doWork(Person01 p)//调用的是一个副本就是拷贝构造函数
{

}

void test03()
{
	Person01 p;
	doWork(p);
}

Person01 doWork02()
{
	Person01 p1;
	return p1;//return时p1已经完成释放，传回去的是拷贝构造函数
}

void test04()
{
	Person01 p = doWork02();
}

int main()
{
	test02();
	test03();
	test04();
	return 0;
}