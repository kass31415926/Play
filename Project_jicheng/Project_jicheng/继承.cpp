//#include <iostream>
//using namespace std;
//
////��ͨ��ʵ��ҳ��
//
////Java
////class Java
////{
////public:
////	void header()
////	{
////		cout << "��ҳ�������Ρ���¼��ע��" << endl;
////	}
////	void footer()
////	{
////		cout << "�������ġ��������ġ�վ�ڵ�ͼ" << endl;
////	}
////	void content()
////	{
////		cout << "Javaѧ����Ƶ" << endl;
////	}
////};
////
////void test01()
////{
////	Java ja;
////	ja.header();
////	ja.footer();
////	ja.content();
////}
//
////�̳�ʵ��
//
////����ҳ��
//class BasePage
//	{
//	public:
//		void header()
//		{
//			cout << "��ҳ�������Ρ���¼��ע��" << endl;
//		}
//		void footer()
//		{
//			cout << "�������ġ��������ġ�վ�ڵ�ͼ" << endl;
//		}
//		void left()
//		{
//			cout << "Java��Ƶ��python��Ƶ" << endl;
//		}
//	};
//
////javaҳ��
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//
////c++
//class Cpp :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Cppѧ����Ƶ" << endl;
//	}
//};
//
////Python
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//
//void test01()
//{
//	Java ja;
//	ja.content();
//	ja.footer();
//	ja.header();
//	ja.left();
//
//	Cpp c;
//	c.content();
//	c.footer();
//	c.header();
//	c.left();
//
//	Python py;
//	py.content();
//	py.footer();
//	py.header();
//	py.left();
//}
//int main()
//{
//	test01();
//	return 0;
//}