#include <iostream>
using namespace std;

class Person
{
public:
	//thisָ��ı�����һ��ָ�볣�� ָ���ǲ����޸ĵ�
	//Person* const this;����thisָ�������
	//const Person* const this;
	void showPerson() const//�൱����һ�е�����,���ε���thisָ��
	{
		//this->m_A = 100;
		//this = NULL;
		this->m_B = 100;
	}

	void func()
	{

	}

	int m_A;
	mutable int m_B;//mutable�ؼ��ֿ����޸ĳ�����������������޸�
};

void test01()
{
	Person p;
	p.showPerson();
}

void test02()
{
	const Person p;
	//p.m_A = 100;
	p.m_B = 100;//m_B������ֵ�����޸�

	//������ֻ�ܵ��ó�����
	p.showPerson();
	p.func();
}

int main()
{
	test01();
	return 0;
}