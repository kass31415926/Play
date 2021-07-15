#include <iostream>
using namespace std;
#include <set>

void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	set<int>s1;

	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(30);
	
	printSet(s1);

	set<int>s2(s1);
	printSet(s2);
}

void test02()
{
	set<int>s1;

	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(30);

	printSet(s1);
	cout << s1.size() << endl;

	set<int>s2;
	s2.insert(100);
	s2.insert(400);
	s2.insert(200);
	s2.insert(300);

	cout << "交换前" << endl;
	printSet(s1);
	printSet(s2);

	s1.swap(s2);
	cout << "交换后" << endl;
	printSet(s1);
	printSet(s2);
}

int main()
{
	test02();
	return 0;
}