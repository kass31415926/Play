#include <iostream>
using namespace std;

//���������ͺ���ʵ��ֻ����һ��Ĭ��ֵ
int func(int a , int b );

int func(int a=10, int b=20)
{
	return a + b;
}

//ռλ���������ú���ʱ�����ռλ������ֻд��������
void func2(int a,int)
{
	cout << "this is func" << endl;
}

//int main()
//{
//	cout << func();
//	func2(10,10);
//	return 0;
//}