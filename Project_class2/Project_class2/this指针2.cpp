//#include <iostream>
//using namespace std;
//
////thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		//thisָ�򱻵��õĳ�Ա������ָ����
//		 this->age = age;
//	}
//
//	Person& PersonAddAge(Person& p)
//	{
//		this->age += p.age;
//		//thisָ��p2��ָ�룬*thisָ��p2������
//		return *this;
//	}
//
//	int age ;
//};
//
////1��������Ƴ�ͻ
//
//void test01()
//{
//	Person p1(18);
//	cout << "age = " << p1.age << endl;
//}
//
////2�����ض�������*this
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//
//	//��ʽ���
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//
//	cout << "p2�����䣺" << p2.age << endl;
//}
//
//int main()
//{
//	test02();
//	return 0;
//}