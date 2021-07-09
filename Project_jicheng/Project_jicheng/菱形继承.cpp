#include <iostream>
using namespace std;

//动物类
//利用虚继承解决菱形继承的问题
//在继承前加关键字virtual变为继承

class Animal
{
public:
	int m_Age;
};

class Sheep:virtual public Animal
{

};

class Tuo :virtual public Animal
{
public:
	
};

class SheepTuo :public Sheep, public Tuo
{

};

void test01()
{
	SheepTuo st;

	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//菱形继承，两个父类拥有相同1数据需要加作用域
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	cout << "st.m_Age = " << st.m_Age << endl;
	//菱形数据会导致资源浪费
}

int main()
{
	test01();
	return 0;
}