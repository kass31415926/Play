#include <iostream>
using namespace std;

//构造函数没有返回值也不写void
//可以有参数发生重载

//析构函数不可以有参数
//只会调用一次

//class Persons
//{
//public:
//	Persons()
//	{
//		cout << "构造函数" << endl;
//	}
//
//	~Persons()
//	{
//		cout << "析构函数" << endl;
//	}
//};
//
//void test01()
//{
//	Persons p;
//}
//
//int main()
//{
//	test01();
//	Persons p;
//	return 0;
//}


//按参数分类：有参与无参
//按类型分类：普通与拷贝

//括号法
//显示法
//隐式转换法

class Person
{
private:
	int m_Age;
public:
	Person()
	{
		cout << "构造函数" << endl;
	}

	Person(int a)
	{
		m_Age = a;
		cout << "有参构造函数" << endl;
	}

	//拷贝构造函数
	Person(const Person &p)
	{
		m_Age = p.m_Age;
		cout << "拷贝构造函数" << endl;
	}

	~Person()
	{
		cout << "析构函数" << endl;
	}
};

void test01()
{
	//括号法
	//Person p1;
	////Person p1()会使编译器认为这是函数申明
	//Person p2(10);
	//Person p3(p2);

	//调用默认构造函数时不要加()

	//显示法
	Person p1;
	Person p2 = Person(10);
	Person p3 = Person(p2);
	//Person(p3)等价于Person(p3)=Person p3
	//Person(10)为匿名对象 特点：当前行执行结束后马上被释放
	//不要利用拷贝构造函数初始化匿名对象

	//隐式转换法
	Person p4 = 10;
	//相当于Person p4=Person(10);
	Person p5 = p4;
}

//int main()
//{
//	test01();
//	return 0;
//}