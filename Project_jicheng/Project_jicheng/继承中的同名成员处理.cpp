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
//		cout << "Base ��������" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base (a) ��������" << endl;
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
//		cout << "Son ��������" << endl;
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
//	s.func(100);//�����ͬ����Ա������ֱ�����ظ����ȫ��ͬ������
//	//cout << "m_A=" << s.m_A << endl;
//	//cout << "Base m_A=" << s.Base::m_A << endl;//ͨ������������Է��ʸ���ͬ����Ա����
//}
//
//int main()
//{
//	test01();
//	return 0;
//}