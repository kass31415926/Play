//#include <iostream>
//using namespace std;
//
//template<class T>//����һ��ģ����߱�������������ݲ�Ҫ����
//
////1���Զ������Ƶ��������Ƶ���һ�µ�����T����ʹ��
////2��ģ�����Ҫָ��T����������
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////template<class T>
//
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	//���ú���ģ�彻��
//	//1���Զ������Ƶ�
//
//	mySwap(a, b);
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//
//	//2����ʾָ������
//	mySwap<int>(a, b);
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}