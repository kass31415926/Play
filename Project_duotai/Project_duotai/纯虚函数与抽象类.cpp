//#include <iostream>
//#include <string>
//using namespace std;
//
//class Base
//{
//public:
//
//	//纯虚函数
//	//只要有一个纯虚函数，这个类就叫做抽象类
//	//特点：
//	//1、无法实例化对象
//	//2、抽象类的子类必须重写父类中的纯虚函数，否则也属于抽象类
//	virtual void func() = 0;
//};
//
//class Son :public Base
//{
//public:
//	virtual void func() 
//	{
//		cout << "func的调用" << endl;
//	};
////};
//
//void test01()
//{
//	//Base b;
//	//new Base;
//	//Son s;
//	Base* base = new Son;
//	base->func();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}