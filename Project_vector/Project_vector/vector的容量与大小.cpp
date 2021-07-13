//#include <iostream>
//using namespace std;
//#include <vector>
//
////vector容量与大小
//
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int>v1;
//	for (int i=0;i<10;i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	if (!v1.empty())
//	{
//		cout << "不为空" << endl;
//		cout << "容量为" << v1.capacity() << endl;
//		cout << "大小为" << v1.size() << endl;
//	}
//	else
//	{
//		cout << "为空" << endl;
//	}
//	v1.resize(15,100);
//	printVector(v1);
//
//	v1.resize(5);
//	printVector(v1);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}