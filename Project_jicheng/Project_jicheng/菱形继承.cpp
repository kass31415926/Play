#include <iostream>
using namespace std;

//������
//������̳н�����μ̳е�����
//�ڼ̳�ǰ�ӹؼ���virtual��Ϊ�̳�

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
	//���μ̳У���������ӵ����ͬ1������Ҫ��������
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	cout << "st.m_Age = " << st.m_Age << endl;
	//�������ݻᵼ����Դ�˷�
}

int main()
{
	test01();
	return 0;
}