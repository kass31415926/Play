#include <iostream>
using namespace std;
#include <string>

//��ģ��û���Զ������Ƶ�ʹ�÷�ʽ
//��ģ������ģ������ڲ����б�����Ĭ�ϲ���

//��ģ��
template<class NameType, class AgeType =int>
class Person
{
public:

	Person(NameType name, AgeType age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	void ShowPerson()
	{
		cout << "name:" << this->m_Name << endl << "age:" << this->m_Age << endl;
	}

	AgeType m_Age;
	NameType m_Name;
};

void test01()
{
	Person <string, int>p1("����", 18);
	Person <string, int>p2("����", 18);
	p1.ShowPerson();
}

void test02()
{
	Person <string>p("����", 999);
	p.ShowPerson();
}

int main()
{
	test02();

	return 0;
}