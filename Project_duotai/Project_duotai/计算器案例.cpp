//#include <iostream>
//#include <string>
//using namespace std;
//
//class Calculator
//{
//public:
//
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1+m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1-m_Num2;
//		}
//		else if (oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//
//		//如果想扩展新的功能，需要修改源码
//		//实际开发提倡开闭原则
//		//开闭原则：对扩展进行开放，对修改进行关闭
//	}
//
//	int m_Num1;
//	int m_Num2;
//
//};
//
//void test01()
//{
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//
//	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
//	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
//	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
//}
//
////利用多态实现计算器
//
////实现计算器抽象类
//class AbstructCalculator
//{
//public:
//
//	virtual int getResult()
//	{
//		return 0;
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//
//class AddCalculator :public AbstructCalculator
//{
//public:
//
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
//class SubCalculator :public AbstructCalculator
//{
//public:
//
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
//class MulCalculator :public AbstructCalculator
//{
//public:
//
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//
//void test02()
//{
//	//多态使用条件
//	//父类指针或者引用指向子类对象
//
//	AbstructCalculator* abc = new AddCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//
//	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;
//
//	abc = new SubCalculator;
//	abc->m_Num1 = 10; 
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;
//
//	abc = new MulCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;
//}
//int main()
//{
//	test02();
//	return 0;
//}