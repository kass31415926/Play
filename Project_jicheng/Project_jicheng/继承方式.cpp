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
//		//m_C = 10;˽��Ȩ�������޷�����
//	}
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100;�̳��˸���ı���Ȩ��
//}
//
//class Son2:protected Base
//{
//public:
//	void func()
//	{
//		m_A = 10;
//		m_B = 10;
//		//m_C = 10;˽��Ȩ�������޷�����
//	}
//};
//
//void test02()
//{
//	Son2 s2;
//	//s2.m_A = 100;����Ϊ����Ȩ��
//	//s2.m_B = 100;����Ϊ����Ȩ��
//}
//
//class Son3 :private Base
//{
//public:
//	void func()
//	{
//		m_A = 10;
//		m_B = 10;
//		//m_C = 10;˽��Ȩ�������޷�����
//	}
//};
//
//void test03()
//{
//	Son3 s3;
//	//s3.m_A = 100;����Ϊ˽��Ȩ��
//	//s3.m_B = 100;����Ϊ˽��Ȩ��
//}
//
//int main()
//{
//
//	return 0;
//}