#include <iostream>
using namespace std;

//������ñ������ṩ�Ŀ������캯������ǳ��������
//p2��p1����߶�ָ�������ͬһ���ڴ�
//���ͷ��лᵼ�¶����ڴ��ظ��ͷ�
//�Լ�д�������캯����������н��

//class Person
//{
//public:
//	Person()
//	{
//		cout << "Ĭ��" << endl;
//	}
//
//	Person(int age,int height)
//	{
//		m_Age = age;
//		m_Height=new int(height);
//		cout << "�в�" << endl;
//	}
//
//	//�Լ�ʵ������Ŀ������캯��
//	Person(const Person& p)
//	{
//		cout << "�������캯��" << endl;
//		m_Age = p.m_Age;
//		//������Ĭ��ʵ�� m_Height = p.m_Height;
//		m_Height = new int(*p.m_Height);
//	}
//
//	~Person()
//	{
//		//�������룬���������ٿռ�����ͷ�
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "����" << endl;
//	}
//	int m_Age;
//	int* m_Height;
//};
//
//void test03()
//{
//	Person p1(18,169);
//
//	cout << "����" << p1.m_Age <<"���"<<*p1.m_Height<< endl;
//
//	Person p2(p1);
//	cout << "����" << p2.m_Age <<"���" << *p2.m_Height << endl;
//}
//
//int main()
//{
//	test03();
//	return 0;
//}