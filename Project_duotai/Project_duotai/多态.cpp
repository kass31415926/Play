//#include <iostream>
//using namespace std;
//
//class Animal
//{
//public:
//	//虚函数
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	 void  speak()
//	{
//		cout << "猫在说话" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "狗在说话" << endl;
//	}
//};
//
////地址早绑定 在编译阶段就确定了函数的地址
////想执行让猫说话，需要在运行阶段绑定
//
////满足动态多态需要继承关系
////子类要重写父类的虚函数
////重写 返回值类型 名称 参数列表 完全相同
//
////动态多态使用
////父类的指针或者引用指向子类对象
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