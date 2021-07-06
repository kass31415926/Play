//#include <iostream>
//using namespace std;
//
////this指针指向被调用的成员函数所属的对象
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		//this指向被调用的成员函数所指对象
//		 this->age = age;
//	}
//
//	Person& PersonAddAge(Person& p)
//	{
//		this->age += p.age;
//		//this指向p2的指针，*this指向p2对象本体
//		return *this;
//	}
//
//	int age ;
//};
//
////1、解决名称冲突
//
//void test01()
//{
//	Person p1(18);
//	cout << "age = " << p1.age << endl;
//}
//
////2、返回对象本身用*this
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//
//	//链式编程
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//
//	cout << "p2的年龄：" << p2.age << endl;
//}
//
//int main()
//{
//	test02();
//	return 0;
//}