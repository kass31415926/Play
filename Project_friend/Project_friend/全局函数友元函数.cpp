//#include <iostream>
//#include <string>
//using namespace std;
//
//class Building
//{
//	friend void goodGay(Building* building);
//public:
//
//	Building()
//	{
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//
//	//客厅
//	string m_SittingRoom;
//
//private:
//
//	//卧室
//	string m_BedRoom;
//};
//
////全局函数
//void goodGay(Building* building)
//{
//	cout << "全局函数访问" << building->m_SittingRoom << endl;
//
//	cout << "全局函数访问" << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	Building building;
//	goodGay(&building);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}