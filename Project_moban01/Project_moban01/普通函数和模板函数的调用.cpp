//#include <iostream>
//using namespace std;
//
////�������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
////����ͨ����ģ������б� ǿ�Ƶ��ú���ģ��
////����ģ����Է�����������
////�������ģ����Ը��õ�ƥ�䣬���ȵ��ú���ģ��
//
//void myPrint(int a, int b)
//{
//	cout << "������ͨ����" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b)
//{
//	cout << "���ú���ģ��" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b,T c)
//{
//	cout << "�������غ���ģ��" << endl;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	//myPrint(a, b);
//	//ͨ����ģ������б���ú���ģ��
//	myPrint<>(a, b);
//
//	myPrint(a, b, 100);
//
//	//�������ģ����Ը��õ�ƥ�䣬���ȵ��ú���ģ��
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint(c1, c2);
//}
//
//
//
//int main()
//{
//	test01();
//	return 0;
//}