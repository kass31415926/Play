#include <iostream>
using namespace std;
#include <vector>

//vector呼唤容器

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int>v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back((i + 1) * 10);
	}
	printVector(v1);

	vector<int>v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printVector(v2);

	cout << "交换后" << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);
}

void test02()
{
	vector<int>v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << "v的容量" << v.capacity() << endl;
	cout << "v的大小" << v.size() << endl;

	v.resize(3);
	cout << "v的容量" << v.capacity() << endl;
	cout << "v的大小" << v.size() << endl;

	//使用swap到吗收缩内存
	vector<int>(v).swap(v);
	cout << "v的容量" << v.capacity() << endl;
	cout << "v的大小" << v.size() << endl;
}

//预留空间
void test03()
{
	vector<int>v;

	v.reserve(100000);
	int num = 0;
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << num << endl;
}

int main()
{
	test03();
	return 0;
}