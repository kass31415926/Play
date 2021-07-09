//#include <iostream>
//#include <string>
//using namespace std;
//
////制作饮品
//
//class AbstractDrink
//{
//public:
//
//	//煮水
//	virtual void Boil() = 0;
//
//	//冲泡
//	virtual void Brew() = 0;
//
//	//倒入杯中
//	virtual void PourInCup() = 0;
//
//	//加入辅料
//	virtual void PutSomething() = 0;
//
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
////制作咖啡
//class Coffee :public AbstractDrink
//{
//public:
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮水" << endl;
//	}
//
//	//冲泡
//	virtual void Brew() 
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//
//	//加入辅料
//	virtual void PutSomething()
//	{
//		cout << "加入牛奶咖啡" << endl;
//	}
//};
//
//class Tea :public AbstractDrink
//{
//public:
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮水" << endl;
//	}
//
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//
//	//加入辅料
//	virtual void PutSomething()
//	{
//		cout << "加入枸杞" << endl;
//	}
//};
//
////工作函数
//void doWork(AbstractDrink* abs) 
//{
//	abs->makeDrink();
//	delete abs;
//}
//
//void test01()
//{
//	doWork(new Coffee);
//
//	doWork(new Tea);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}