//#include <iostream>
//using namespace std;
//
////如果函数模板和普通函数都可以实现，优先调用普通函数
////可以通过空模板参数列表 强制调用函数模板
////函数模板可以发生函数重载
////如果函数模板可以更好的匹配，优先调用函数模板
//
//void myPrint(int a, int b)
//{
//	cout << "调用普通函数" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b)
//{
//	cout << "调用函数模板" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b,T c)
//{
//	cout << "调用重载函数模板" << endl;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	//myPrint(a, b);
//	//通过空模板参数列表调用函数模板
//	myPrint<>(a, b);
//
//	myPrint(a, b, 100);
//
//	//如果函数模板可以更好的匹配，优先调用函数模板
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint(c1, c2);
//}
//
//
//
//int main()
//{
//	test01();
//	return 0;
//}