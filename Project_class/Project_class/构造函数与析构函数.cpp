#include <iostream>
using namespace std;

//���캯��û�з���ֵҲ��дvoid
//�����в�����������

//���������������в���
//ֻ�����һ��

//class Persons
//{
//public:
//	Persons()
//	{
//		cout << "���캯��" << endl;
//	}
//
//	~Persons()
//	{
//		cout << "��������" << endl;
//	}
//};
//
//void test01()
//{
//	Persons p;
//}
//
//int main()
//{
//	test01();
//	Persons p;
//	return 0;
//}


//���������ࣺ�в����޲�
//�����ͷ��ࣺ��ͨ�뿽��

//���ŷ�
//��ʾ��
//��ʽת����

class Person
{
private:
	int m_Age;
public:
	Person()
	{
		cout << "���캯��" << endl;
	}

	Person(int a)
	{
		m_Age = a;
		cout << "�вι��캯��" << endl;
	}

	//�������캯��
	Person(const Person &p)
	{
		m_Age = p.m_Age;
		cout << "�������캯��" << endl;
	}

	~Person()
	{
		cout << "��������" << endl;
	}
};

void test01()
{
	//���ŷ�
	//Person p1;
	////Person p1()��ʹ��������Ϊ���Ǻ�������
	//Person p2(10);
	//Person p3(p2);

	//����Ĭ�Ϲ��캯��ʱ��Ҫ��()

	//��ʾ��
	Person p1;
	Person p2 = Person(10);
	Person p3 = Person(p2);
	//Person(p3)�ȼ���Person(p3)=Person p3
	//Person(10)Ϊ�������� �ص㣺��ǰ��ִ�н��������ϱ��ͷ�
	//��Ҫ���ÿ������캯����ʼ����������

	//��ʽת����
	Person p4 = 10;
	//�൱��Person p4=Person(10);
	Person p5 = p4;
}

//int main()
//{
//	test01();
//	return 0;
//}