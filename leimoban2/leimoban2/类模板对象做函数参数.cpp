//#include <iostream>
//using namespace std;
//#include <string>
//
////类模板对象做函数参数
////1、指定传入类型
////2、参数模板化
////3、整个类模板化
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
//		cout << "姓名：" << this->m_Name << "\t年龄：" << this->m_Age << endl;
//	}
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
////1、指定传入类型
//void  printPerson1(Person<string, int>& p)
//{
//	p.showPerosn();
//}
//
//void test01()
//{
//	Person<string, int>p("孙悟空", 999);
//	printPerson1(p);
//}
//
//// 2、参数模板化
//template<class T1, class T2>
//void  printPerson2(Person<T1,T2>& p)
//{
//	p.showPerosn();
//}
//
//void test02()
//{
//	Person<string, int>p("猪八戒", 99);
//	printPerson2(p);
//}
//
////3、整个类模板化
//template<class T>
//void  printPerson3(T& p)
//{
//	p.showPerosn();
//}
//
//void test03()
//{
//	Person<string, int>p("唐僧", 9);
//	p.showPerosn();
//}
//int main()
//{
//	test03();
//	return 0;
//}