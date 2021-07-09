//#include <iostream>
//using namespace std;
//
////普通的实现页面
//
////Java
////class Java
////{
////public:
////	void header()
////	{
////		cout << "首页、公开课、登录、注册" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心、交流中心、站内地图" << endl;
////	}
////	void content()
////	{
////		cout << "Java学科视频" << endl;
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
////继承实现
//
////公共页面
//class BasePage
//	{
//	public:
//		void header()
//		{
//			cout << "首页、公开课、登录、注册" << endl;
//		}
//		void footer()
//		{
//			cout << "帮助中心、交流中心、站内地图" << endl;
//		}
//		void left()
//		{
//			cout << "Java视频、python视频" << endl;
//		}
//	};
//
////java页面
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
//
////c++
//class Cpp :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Cpp学科视频" << endl;
//	}
//};
//
////Python
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python学科视频" << endl;
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