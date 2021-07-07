//#include <iostream>
//using namespace std;
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//	friend void test01();
//private:
//
//	//成员函数重载左移运算符 ,通常不行cout无法在左侧
//
//	int m_A;
//	int m_B;
//};
//
////全局函数重载左移运算符
//ostream & operator<<(ostream &cout,Person & p)
//{
//	cout << "m_A = " << p.m_A << " m_B = " << p.m_B ;
//	return cout;
//}
//
//void test01()
//{
//	Person p;
//	p.m_A = 10;
//	p.m_B = 10;
//
//	cout << p << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}