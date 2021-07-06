//#include <iostream>
//using namespace std;
//
////成员函数和成员变量分开存储
////非静态成员变量属于类的对象
//
//class Person
//{
//	int m_A;//属于类的对象
//
//	static int m_B;//不属于类的对象
//
//	void func()//不属于类的对象
//	{
//
//	}
//
//	static void func02()//不属于类的对象
//	{
//
//	}
//};
//
//int Person::m_B=0;
//
//void test01()
//{
//	Person p;
//	//给空对象分配一个字节空间用来区分对象所在的位置
//	cout << "size of p =" << sizeof(p) << endl;
//}
//
//void test02()
//{
//	Person p;
//
//	cout << "size of p =" << sizeof(p) << endl;
//}
//
//int main()
//{
//	test02();
//	return 0;
//}