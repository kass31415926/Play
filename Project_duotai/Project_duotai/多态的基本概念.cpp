//#include <iostream>
//using namespace std;
//
//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	void  speak()
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
//void test02()
//{
//	cout << "size of Animal = " << sizeof(Animal) << endl;
//}
//
//int main()
//{
//	test02();
//	return 0;
//}