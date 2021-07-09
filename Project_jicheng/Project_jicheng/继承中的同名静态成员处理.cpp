//#include <iostream>
//using namespace std;
//
//class Base
//{
//public:
//	static int m_A;
//};
//
//int Base::m_A = 100;
//
//class Son :public Base
//{
//public:
//	static int m_A;
//};
//
//int Son::m_A = 200;
//	
//void test01()
//{
//	Son s;
//	cout << "Son m_A:" << s.m_A << endl;
//	cout << "Base m_A:" << s.Base::m_A << endl;
//	cout << Son::m_A << Son::Base::m_A << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}