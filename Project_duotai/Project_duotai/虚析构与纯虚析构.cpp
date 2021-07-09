//#include <iostream>
//#include <string>
//using namespace std;
//
////多态使用过程中如果有子类开辟到堆区，那么父类指针在释放时无法调用到子类的析构函数
//
//class Animal
//{
//public:
//
//	Animal()
//	{
//		cout << "a 构造" << endl;
//	}
//
//	virtual void speak() = 0;
//
//	//virtual ~Animal()
//	//{
//	//	cout << "a 析构" << endl;
//	//}
//	//纯虚析构 需要申明和实现 有了纯虚析构后属于抽象类 无法实例化对象
//	virtual  ~Animal() = 0;
//};
//
//Animal:: ~Animal() 
//{
//	cout << "Animal的纯虚析构" << endl;
//}
//
//class Cat :public Animal
//{public:
//
//	Cat(string name)
//	{
//		cout << "构造函数" << endl;
//		m_Name = new string(name);
//	}
//
//	virtual void speak()
//	{
//		cout << *m_Name << "小猫啊说话" << endl;
//	}
//
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "析构函数" << endl;
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
//	//父类指针在所构造时不会调用子类中的析构函数，导致如果有堆区属性会出现内存泄漏
//	delete animal;
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}