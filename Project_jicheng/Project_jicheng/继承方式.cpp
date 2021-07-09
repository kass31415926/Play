//#include <iostream>
//using namespace std;
//
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son1 :public Base
//{
//public:
//
//	void func()
//	{
//		m_A = 10;
//		m_B = 10;
//		//m_C = 10;私有权限子类无法访问
//	}
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100;继承了父类的保护权限
//}
//
//class Son2:protected Base
//{
//public:
//	void func()
//	{
//		m_A = 10;
//		m_B = 10;
//		//m_C = 10;私有权限子类无法访问
//	}
//};
//
//void test02()
//{
//	Son2 s2;
//	//s2.m_A = 100;更改为保护权限
//	//s2.m_B = 100;更改为保护权限
//}
//
//class Son3 :private Base
//{
//public:
//	void func()
//	{
//		m_A = 10;
//		m_B = 10;
//		//m_C = 10;私有权限子类无法访问
//	}
//};
//
//void test03()
//{
//	Son3 s3;
//	//s3.m_A = 100;更改为私有权限
//	//s3.m_B = 100;更改为私有权限
//}
//
//int main()
//{
//
//	return 0;
//}