//#include <iostream>
//using namespace std;
//#include <string>
//
////��ģ���������������
////1��ָ����������
////2������ģ�廯
////3��������ģ�廯
//
//
//template<class T1,class T2>
//class Person
//{
//public:
//
//	Person(T1 name, T2 age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//
//	void showPerosn()
//	{
//		cout << "������" << this->m_Name << "\t���䣺" << this->m_Age << endl;
//	}
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
////1��ָ����������
//void  printPerson1(Person<string, int>& p)
//{
//	p.showPerosn();
//}
//
//void test01()
//{
//	Person<string, int>p("�����", 999);
//	printPerson1(p);
//}
//
//// 2������ģ�廯
//template<class T1, class T2>
//void  printPerson2(Person<T1,T2>& p)
//{
//	p.showPerosn();
//}
//
//void test02()
//{
//	Person<string, int>p("��˽�", 99);
//	printPerson2(p);
//}
//
////3��������ģ�廯
//template<class T>
//void  printPerson3(T& p)
//{
//	p.showPerosn();
//}
//
//void test03()
//{
//	Person<string, int>p("��ɮ", 9);
//	p.showPerosn();
//}
//int main()
//{
//	test03();
//	return 0;
//}