#include <iostream>
using namespace std;
#include <list>

void printList(const list<int>L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList(L1);

	list<int>L2(L1.begin(), L1.end());

	printList(L2);

	list<int>L3(L2);

	printList(L3);

	list<int>L4(10, 1000);
	printList(L4);
}

void test02()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList(L1); 

	list<int>L2;
	L2 = L1;
	printList(L2);

	list<int>L3;
	L3.assign(L2.begin(), L2.end());
	printList(L3);

	list<int>L4;
	L4.assign(10, 100);
	printList(L4);
}

void test03()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList(L1);

	list<int>L2;
	L2.assign(10, 100);

	cout << "交互前" << endl;
	printList(L1);
	printList(L2);

	L1.swap(L2);
	cout << "交换后" << endl;
	printList(L1);
	printList(L2);
}

void test04()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList(L1);
	L1.resize(10, 100000);
	printList(L1);
}

void test05()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);
	L1.push_front(400);

	L1.pop_back();
	L1.pop_front();

	L1.insert(L1.begin(), 2000);
	list<int>::iterator p = L1.begin();
	L1.insert(++p, 1000);

	L1.clear();

	printList(L1);
}

void test06()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	cout << L1.front() << endl;
	cout << L1.back() << endl;

	printList(L1);
}

void test07()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	L1.reverse();
	printList(L1);

	L1.sort();
	printList(L1);
}

int main()
{
	test07();
	return 0;
}