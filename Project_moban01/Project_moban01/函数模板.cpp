//#include <iostream>
//using namespace std;
//
//template<typename T>//申明一个模板告诉编译器后面的内容不要报错
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	//利用函数模板交换
//	//1、自动类型推导
//
//	mySwap(a, b);
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//
//	//2、显示指定类型
//	mySwap<int>(a, b);
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}