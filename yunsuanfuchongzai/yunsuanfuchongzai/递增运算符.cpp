//#include <iostream>
//using namespace std;
//
////���ص��������
//
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	//����ǰ��++�����
//	MyInteger& operator++()//���ص���ͬһ������
//	{
//		m_Num++;
//		return *this;//��������
//	}
//
//	//���غ���++�����
//	MyInteger operator++(int)//int����ռλ������������������ǰ�û��ߺ���
//	{
//		//�ȼ�¼���
//		MyInteger temp = *this;
//		//�����
//		m_Num++;
//		//��󷵻ؽ��,ע�ⷵ�ص���ֵ����������Ϊ�ᱻ�ͷ�
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
//
//ostream& operator<<(ostream& cout, MyInteger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	MyInteger myint;
//	cout << ++myint << endl;
//}
//
//void test02()
//{
//	MyInteger myint;
//	cout << myint++ << endl;
//	cout << myint << endl;
//}
//
//int main()
//{
//	test02();
//	return 0;
//}