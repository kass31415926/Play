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
//	int m_A;
//};
//
//class Base2
//{
//public:
//	Base2()
//	{
//		m_A = 200;
//	}
//	int m_A;
//};
//
//class Son :public Base,public Base2
//{
//public:
//	int m_C;
//	int m_D;
//};
//
//void test01()
//{
//	Son s;
//	
//	cout << "size of Son = " << sizeof(s) << endl;
//	//父类中有同名成员需加作用域
//	cout << "1.m_A=" << s.Base::m_A << endl;
//	cout << "2.m_A=" << s.Base2::m_A << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}