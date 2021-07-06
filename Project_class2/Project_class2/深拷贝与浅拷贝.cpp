#include <iostream>
using namespace std;

//如果利用编译器提供的拷贝构造函数会做浅拷贝操作
//p2和p1的身高都指向堆区的同一块内存
//在释放中会导致堆区内存重复释放
//自己写拷贝构造函数。深拷贝进行解决

//class Person
//{
//public:
//	Person()
//	{
//		cout << "默认" << endl;
//	}
//
//	Person(int age,int height)
//	{
//		m_Age = age;
//		m_Height=new int(height);
//		cout << "有参" << endl;
//	}
//
//	//自己实现深拷贝的拷贝构造函数
//	Person(const Person& p)
//	{
//		cout << "拷贝构造函数" << endl;
//		m_Age = p.m_Age;
//		//编译器默认实现 m_Height = p.m_Height;
//		m_Height = new int(*p.m_Height);
//	}
//
//	~Person()
//	{
//		//析构代码，将堆区开辟空间进行释放
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "析构" << endl;
//	}
//	int m_Age;
//	int* m_Height;
//};
//
//void test03()
//{
//	Person p1(18,169);
//
//	cout << "年龄" << p1.m_Age <<"身高"<<*p1.m_Height<< endl;
//
//	Person p2(p1);
//	cout << "年龄" << p2.m_Age <<"身高" << *p2.m_Height << endl;
//}
//
//int main()
//{
//	test03();
//	return 0;
//}