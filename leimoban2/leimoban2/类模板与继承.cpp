//#include <iostream>
//using namespace std;
//#include <string>
//
////��ģ����̳�
////
//
//
//template<class T>
//class Base
//{
//public:
//
//	T m;
//};
//
//
////class Son :public Base//��Ҫ֪�������е�T������
//class Son:public Base<int>
//{
//
//};
//
//void test01()
//{
//	Son s1;
//}
//
//template<class T1,class T2>
//class Son2 :public Base<T2>
//{
//	T1 obj;
//};
//
//void test02()
//{
//	Son2<int, char>S2;
//}
//int main()
//{
//	test01();
//	return 0;
//}