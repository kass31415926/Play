#include <iostream>
using namespace std;

//�������캯���ĵ���
//ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//ֵ���ݵķ�ʽ����������ֵ
//��ֵ��ʽ���ؾֲ�����

class Person01
{
public:
	int m_Age;
public:
	Person01()
	{
		cout << "���캯��" << endl;
	}
	Person01(int age)
	{
		m_Age = age;
		cout << "�вι��캯��" << endl;
	}
	Person01(const Person01& p)
	{
		m_Age = p.m_Age;
		cout << "�������캯��" << endl;
	}
	~Person01()
	{
		cout << "��������" << endl;
	}
};

void test02() {
	Person01 p1(20);
	Person01 p2(p1);
	cout << "p2�����䣺" << p2.m_Age << endl;
}

void doWork(Person01 p)//���õ���һ���������ǿ������캯��
{

}

void test03()
{
	Person01 p;
	doWork(p);
}

Person01 doWork02()
{
	Person01 p1;
	return p1;//returnʱp1�Ѿ�����ͷţ�����ȥ���ǿ������캯��
}

void test04()
{
	Person01 p = doWork02();
}

int main()
{
	test02();
	test03();
	test04();
	return 0;
}