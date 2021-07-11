//#include <iostream>
//using namespace std;
//
////普通函数调用可以发生隐式类型转换
////函数模板 用自动类型推导，不可发生隐式函数转换
////函数模板 用自动类型推导，可以发生隐式类型转换
////测试char数组与int数组
//
//template<class T>
//T myAdd02(T a,T b)
//{
//	return a + b;
//}
//
//
//int myAdd01(int a, int b)
//{
//	return a + b;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	char c = 'c';
//
//	cout << myAdd01(a, c) << endl;
//
//	cout << myAdd02(a, b) << endl;
//
//	cout << myAdd02<int>(a, c) << endl;
//}
//
//
//
//int main()
//{
//	test01();
//	return 0;
//}