//#include <iostream>
//#include <string>
//using namespace std;
//
//class Building;
//
//class GoodGay
//{
//public:
//
//	GoodGay();
//
//	void visit();
//
//	Building* building;
//};
//
//class Building
//{
//	friend class GoodGay;
//public:
//
//	Building();
//	string m_SittingRoom;
//
//private:
//	string m_BedRoom;
//};
//
//Building::Building()
//{
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//
//GoodGay::GoodGay()
//{
//	//����һ�����������
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "goodgay���ڷ���" << building->m_SittingRoom << endl;
//
//	cout << "goodgay���ڷ���" << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}