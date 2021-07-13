//#include <iostream>
//using namespace std;
//#include <vector>
//
////vector≤Â»Î…æ≥˝
///*
//* 
//*/
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
//	for (int i = 0; i < 5; i++)
//	{
//		v1.push_back((i+1)*10);
//	}
//	printVector(v1);
//
//	v1.pop_back();
//	printVector(v1);
//
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//
//	v1.insert(v1.begin(), 2, 1000);
//	printVector(v1);
//
//	v1.erase(v1.begin());
//	printVector(v1);
//
//	v1.erase(v1.begin(), v1.end());
//	printVector(v1);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}