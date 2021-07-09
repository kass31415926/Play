//#include <iostream>
//using namespace std;
//
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//
//	void func()
//	{
//		cout << "Base 函数调用" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base (a) 函数调用" << endl;
//	}
//	int m_A;
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//
//	/*void func()
//	{
//		cout << "Son 函数调用" << endl;
//	}*/
//
//	int m_A;
//};
//
//void test01()
//{
//	Son s;
//	s.func();
//	s.Base::func();
//	s.func(100);//如果有同名成员函数会直接隐藏父类的全部同名函数
//	//cout << "m_A=" << s.m_A << endl;
//	//cout << "Base m_A=" << s.Base::m_A << endl;//通过加作用域可以访问父类同名成员属性
//}
//
//int main()
//{
//	test01();
//	return 0;
//}