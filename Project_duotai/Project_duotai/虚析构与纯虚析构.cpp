//#include <iostream>
//#include <string>
//using namespace std;
//
////��̬ʹ�ù�������������࿪�ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������
//
//class Animal
//{
//public:
//
//	Animal()
//	{
//		cout << "a ����" << endl;
//	}
//
//	virtual void speak() = 0;
//
//	//virtual ~Animal()
//	//{
//	//	cout << "a ����" << endl;
//	//}
//	//�������� ��Ҫ������ʵ�� ���˴������������ڳ����� �޷�ʵ��������
//	virtual  ~Animal() = 0;
//};
//
//Animal:: ~Animal() 
//{
//	cout << "Animal�Ĵ�������" << endl;
//}
//
//class Cat :public Animal
//{public:
//
//	Cat(string name)
//	{
//		cout << "���캯��" << endl;
//		m_Name = new string(name);
//	}
//
//	virtual void speak()
//	{
//		cout << *m_Name << "Сè��˵��" << endl;
//	}
//
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "��������" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//
//	string *m_Name;
//};
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	//����ָ����������ʱ������������е�������������������ж������Ի�����ڴ�й©
//	delete animal;
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}