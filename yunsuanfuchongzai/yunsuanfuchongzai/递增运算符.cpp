//#include <iostream>
//using namespace std;
//
////重载递增运算符
//
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	//重载前置++运算符
//	MyInteger& operator++()//返回的是同一个数据
//	{
//		m_Num++;
//		return *this;//返回自身
//	}
//
//	//重载后置++运算符
//	MyInteger operator++(int)//int代表占位参数，可以用来区别前置或者后置
//	{
//		//先记录结果
//		MyInteger temp = *this;
//		//后递增
//		m_Num++;
//		//最后返回结果,注意返回的是值不是自身，因为会被释放
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
//
//ostream& operator<<(ostream& cout, MyInteger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	MyInteger myint;
//	cout << ++myint << endl;
//}
//
//void test02()
//{
//	MyInteger myint;
//	cout << myint++ << endl;
//	cout << myint << endl;
//}
//
//int main()
//{
//	test02();
//	return 0;
//}