#include <iostream>
#include <string>
using namespace std;

class Building;

class GoodGay
{
public:
	GoodGay();

	void visit();
	void visit2();

	Building* building;
};

class Building
{
	friend void GoodGay::visit();
	friend void GoodGay::visit2();
public:

	Building();

	string m_SettingRoom;

private:

	string m_BedRoom;
};

Building::Building()
{
	m_SettingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit()
{
	cout << "visit函数正在访问" << building->m_SettingRoom << endl;
	cout << "visit函数正在访问" << building->m_BedRoom << endl;
}

void GoodGay::visit2()
{
		cout << "visit函数正在访问" << building->m_SettingRoom << endl;
		cout << "visit函数正在访问" << building->m_BedRoom << endl;
}

void test01()
{
	GoodGay gg;
	gg.visit();
	gg.visit2();
}

int main()
{
	test01();
	return 0;
}