//#include <iostream>
//#include <string>
//using namespace std;
//
////所有对象共用一分数据
////在编译阶段分配内存（全局区）
////类内申明，类外初始化
//
//class Person
//{
//public:
//	//所有对象共享
//	static int m_A;
//
//private:
//	static int m_B;
//};
//
//int Person::m_A = 100;
//
//int Person::m_B = 300;
//
//void test01()
//{
//	Person p;
//	cout << p.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//	cout << p.m_A << endl;
//}
//
//void test02()
//{
//	//静态成员不属于某个对象
//
//	//1、通过对象进行访问
//	Person p;
//	cout << p.m_A << endl;
//	//2、通过类名进行访问
//	cout << Person::m_A << endl;
//}
//
//int main()
//{
//	test02();
//	return 0;
//}