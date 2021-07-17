#include <iostream>
using namespace std;
#include <functional>
#include <vector>
#include <algorithm>

void test01()
{
	negate<int>n;

	cout << n(50) << endl;
}

void test02()
{
	plus<int>p;

	cout << p(10, 20) << endl;
}

class MyComparre
{
public:
	bool operator()(int v1, int v2)const
	{
		return v1 > v2;
	}
};

void test03()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(50);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	sort(v.begin(), v.end(), MyComparre());
	sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	test01();

	test02();

	test03();

	return 0;
}