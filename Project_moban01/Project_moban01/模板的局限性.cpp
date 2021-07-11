//#include <iostream>
//using namespace std;
//#include <string>
//
////模板的局限性
////特定的数据据类型需要具体化方式做特定实现
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
////利用具体化的Person的版本实现代码，具体优化调用
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
//		cout << "相等" << endl;
//	}
//	else
//	{
//		cout << "不等" << endl;
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
//		cout << "相等" << endl;
//	}
//	else
//	{
//		cout << "不等" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}