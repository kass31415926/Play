//#include <iostream>
//#include <string>
//using namespace std;
//
////������Ʒ
//
//class AbstractDrink
//{
//public:
//
//	//��ˮ
//	virtual void Boil() = 0;
//
//	//����
//	virtual void Brew() = 0;
//
//	//���뱭��
//	virtual void PourInCup() = 0;
//
//	//���븨��
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
////��������
//class Coffee :public AbstractDrink
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "��ˮ" << endl;
//	}
//
//	//����
//	virtual void Brew() 
//	{
//		cout << "���ݿ���" << endl;
//	}
//
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	//���븨��
//	virtual void PutSomething()
//	{
//		cout << "����ţ�̿���" << endl;
//	}
//};
//
//class Tea :public AbstractDrink
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "��ˮ" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	//���븨��
//	virtual void PutSomething()
//	{
//		cout << "�������" << endl;
//	}
//};
//
////��������
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