//#include <iostream>
//using namespace std;
//
//class Animal
//{
//public:
//	//�麯��
//	virtual void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	 void  speak()
//	{
//		cout << "è��˵��" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "����˵��" << endl;
//	}
//};
//
////��ַ��� �ڱ���׶ξ�ȷ���˺����ĵ�ַ
////��ִ����è˵������Ҫ�����н׶ΰ�
//
////���㶯̬��̬��Ҫ�̳й�ϵ
////����Ҫ��д������麯��
////��д ����ֵ���� ���� �����б� ��ȫ��ͬ
//
////��̬��̬ʹ��
////�����ָ���������ָ���������
//void doSpeak(Animal& animal)
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}