#include <iostream>
using namespace std;
#include <string>

//类模板没有自动类型推导使用方式
//类模板在你模板可以在参数列表中有默认参数

//类模板
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
	Person <string, int>p1("张三", 18);
	Person <string, int>p2("张三", 18);
	p1.ShowPerson();
}

void test02()
{
	Person <string>p("李四", 999);
	p.ShowPerson();
}

int main()
{
	test02();

	return 0;
}