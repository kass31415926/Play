//#include <iostream>
//using namespace std;
//
//template<class T>//申明一个模板告诉编译器后面的内容不要报错
//
////1、自动类型推导，必须推导出一致的类型T才能使用
////2、模板必须要指出T的数据类型
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////template<class T>
//
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