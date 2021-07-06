#include <iostream>
using namespace std;

class Person
{
public:
	//this指针的本质是一个指针常量 指向是不可修改的
	//Person* const this;这是this指针的意义
	//const Person* const this;
	void showPerson() const//相当于上一行的意义,修饰的是this指针
	{
		//this->m_A = 100;
		//this = NULL;
		this->m_B = 100;
	}

	void func()
	{

	}

	int m_A;
	mutable int m_B;//mutable关键字可以修改成特殊变量看，可以修改
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
	p.m_B = 100;//m_B是特殊值可以修改

	//常对象只能调用常函数
	p.showPerson();
	p.func();
}

int main()
{
	test01();
	return 0;
}