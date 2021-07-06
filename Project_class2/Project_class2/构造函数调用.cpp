#include <iostream>
using namespace std;

//1、创建一个类，编译器会给每个类添加至少三个函数
//默认构造
//析构函数
//拷贝函数

//2、
//如果写了有参构造函数，编译器不会提供默认构造函数，但是仍会提供拷贝构造函数
//如果用户写了拷贝构造函数，编译器不会提供其他构造函数
//class Person
//{
//public:
//	int m_Age;
//
//	Person()
//	{
//		cout << "Person 默认构造函数" << endl;
//	}
//
//	Person(int age)
//	{
//		cout << "Person 有参构造函数" << endl;
//	}
//
//	Person(const Person& p)
//	{
//		cout << "Person 拷贝构造函数" << endl;
//		m_Age = p.m_Age;
//	}
//
//	~Person()
//	{
//		cout << "Person 析构函数" << endl;
//	}
//
//};
//
//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//
//	Person p2(p);
//
//	cout << "p2的年龄：" << p2.m_Age << endl;
//}
//
//void test02() 
//{
//	Person p(18);
//
//	Person p2(p);
//}

//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}