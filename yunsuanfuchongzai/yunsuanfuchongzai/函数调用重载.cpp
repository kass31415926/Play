#include <iostream>
#include <string>
using namespace std;


//�������÷�()Ҳ��������
//���غ�ķ�ʽ�ǳ������ĵ��ã�Ҳ�зº���
//�º���û�й̶���д�����ǳ����

class MyPrint
{
public:
	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void MyPrint02(string test)
{
	cout << test << endl;
}

void test01()
{
	MyPrint myPrint;
	myPrint("hello world");
	MyPrint02("hello world");
}

int  main()
{
	test01();
	return 0;
}