#include <iostream>
#include <string>
using namespace std;

const double PI = 3.14;

//��װ�������Ժ���Ϊ��Ϊһ�����壬д��һ�𣬱�������
//���һ��Բ�࣬��Բ���ܳ�
//԰���ܳ��Ĺ�ʽ��2 * PI * �뾶

//����Ȩ��
//public    ����
//private   ˽�� ֻ���Լ����ڿ��Է���
//protected ���� �����е�Ȩ��������Է���

class Circle
{
public:
	int m_r;

	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};

class Student
{
public:
	//����
	string m_Name;
	//ѧ��
	int m_Id;

	void showStudent()
	{
		cout << "������" << m_Name << "\tѧ�ţ�" << m_Id << endl;
	}

	void setName(string name)
	{
		m_Name = name;
	}
};

//class Person
//{
//public:
//	string m_Name;
//
//protected:
//	string m_Car;
//
//private:
//	int m_Password;
//
//public:
//	void func()
//	{
//		m_Name = "����";
//		m_Car = "mini";
//		m_Password = 1234;
//	}
//
//};
//
//int main()
//{
//	//Circle c1;
//	//c1.m_r = 10;
//	//cout <<"Բ���ܳ���"<< c1.calculateZC() << endl;
//
//	Student s1;
//	s1.setName("����");
//	s1.m_Id = 2019;
//	s1.showStudent();
//
//	Person p1;
//
//	p1.m_Name = "����";
//
//
//	return 0;
//}