#include <iostream>
#include <string>
using namespace std;

const double PI = 3.14;

//封装，将属性和行为作为一个整体，写在一起，表现事务
//设计一个圆类，求圆的周长
//园求周长的公式：2 * PI * 半径

//三种权限
//public    公共
//private   私有 只有自己类内可以访问
//protected 保护 父类中的权限子类可以访问

class Circle
{
public:
	int m_r;

	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};

class Student
{
public:
	//姓名
	string m_Name;
	//学号
	int m_Id;

	void showStudent()
	{
		cout << "姓名：" << m_Name << "\t学号：" << m_Id << endl;
	}

	void setName(string name)
	{
		m_Name = name;
	}
};

//class Person
//{
//public:
//	string m_Name;
//
//protected:
//	string m_Car;
//
//private:
//	int m_Password;
//
//public:
//	void func()
//	{
//		m_Name = "张三";
//		m_Car = "mini";
//		m_Password = 1234;
//	}
//
//};
//
//int main()
//{
//	//Circle c1;
//	//c1.m_r = 10;
//	//cout <<"圆的周长："<< c1.calculateZC() << endl;
//
//	Student s1;
//	s1.setName("张三");
//	s1.m_Id = 2019;
//	s1.showStudent();
//
//	Person p1;
//
//	p1.m_Name = "李四";
//
//
//	return 0;
//}