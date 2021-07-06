//#include <iostream>
//using namespace std;
//
////静态成员函数只能访问静态成员变量
////静态成员函数也有访问权限
//
//class Person
//{
//public:
//	static void func()
//	{
//		m_A = 100;
//		//m_B = 200;无法区分是哪个对象的成员变量
//		cout << "ststic void" << endl;
//	}
//	static int m_A;
//	int m_B = 100;
//private:
//	static void func2()
//	{
//
//	}
//};
//
//int Person::m_A = 0;
//
//void test01()
//{
//	//1、通过对象
//	Person p;
//	p.func();
//	//p.func2();
//
//	//2、通过类名
//	Person::func();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}