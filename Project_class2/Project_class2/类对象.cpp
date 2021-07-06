//#include <iostream>
//#include <string>
//using namespace std;
//
//class Phone
//{
//public:
//
//	Phone(string pName)
//	{
//		m_PName = pName;
//		cout << "Phone 构造" << endl;
//	}
//	~Phone()
//	{
//		cout << "Phone析构" << endl;
//	}
//
//	string m_PName;
//};
//
//class Person
//{
//public:
//	//Phone m_Phone = pName; 隐式转换法
//	Person(string name, string pName):m_Name(name),m_Phone(pName)
//	{
//		cout << "Person 构造" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person析构" << endl;
//	}
//	string m_Name;
//	Phone m_Phone;
//};
//
//void test01()
//{
//	Person p("张三", "iphone");
//	cout << "手机：" << p.m_Phone.m_PName << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}