//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>//��׼�㷨ͷ�ļ�
//
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//
//void test01()
//{
//	//����һ��vector����
//	vector<int>v;
//
//	//�������в�������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//ͨ�����������������е�����
//	//vector<int>::iterator itBegin = v.begin();
//	//vector<int>::iterator itEnd = v.end();
//
//	////��һ�ֱ�����ʽ
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//	//�ڶ��ֱ���
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	//�����ֱ���
//	for_each(v.begin(), v.end(), myPrint);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}