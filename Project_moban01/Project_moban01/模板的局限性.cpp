//#include <iostream>
//using namespace std;
//#include <string>
//
////ģ��ľ�����
////�ض������ݾ�������Ҫ���廯��ʽ���ض�ʵ��
//
//template<class T>
//bool myCompare(T &a, T &b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
////���þ��廯��Person�İ汾ʵ�ִ��룬�����Ż�����
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	int m_Age;
//	string m_Name;
//};
//
//
//template<>bool myCompare(Person& p1, Person& p2)
//{
//	if (p1.m_Name == p2.m_Name&&p1.m_Age==p2.m_Age)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	bool ret = myCompare(a, b);
//
//	if (ret)
//	{
//		cout << "���" << endl;
//	}
//	else
//	{
//		cout << "����" << endl;
//	}
//}
//
//void test02()
//{
//	Person p1("Tom", 10);
//	Person p2("Tom", 10);
//
//	bool ret = myCompare(p1, p2);
//	if (ret)
//	{
//		cout << "���" << endl;
//	}
//	else
//	{
//		cout << "����" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}