#include <iostream>
using namespace std;
#include <deque>
#include<algorithm>

//deque˫������ ���캯��

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it < d.end(); it++)
		cout << *it << " ";
	cout << endl;
}

void test01()
{
	deque<int>d1;
	for (int i = 0 ; i < 10; i++)
	{
		d1.push_back(i);
	}

	printDeque(d1);

	deque<int>d2(d1.begin(), d1.end());
	printDeque(d2);

	deque<int>d3(10, 100);
	printDeque(d3);

	deque<int>d4(d3);
	printDeque(d4);
}

//��ֵ����

void test02()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}

	printDeque(d1);

	deque<int>d2;
	d2 = d1;
	printDeque(d2);

	deque<int>d3;
	d3.assign(d1.begin(), d1.end());
	printDeque(d3);

	deque<int>d4;
	d4.assign(10, 100);
	printDeque(d4);
}

//��С����

void test03()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}

	printDeque(d1);

	if (d1.empty())
	{
		cout << "Ϊ��" << endl;
	}
	else
	{
		cout << "��Ϊ��" << endl;
		cout << "��С" << d1.size() << endl;
		//deque����û�������ĸ���
	}

	d1.resize(16);
	printDeque(d1);

	d1.resize(17, 1);
	printDeque(d1);
}

//������ɾ��
//���˲���
void test04()
{
	deque<int>d1;
	for (int i = 0; i < 5; i++)
	{
		d1.push_back((i+1)*10);
	}

	d1.push_front(100);
	d1.push_front(200);

	printDeque(d1);

	d1.pop_back();
	d1.pop_front();
	printDeque(d1);

	d1.insert(d1.begin(), 1000);
	d1.insert(d1.begin(), 2, 10000);
	printDeque(d1);

	//��������ķ�ʽ���в���
	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d1.insert(d1.begin(), d2.begin(), d2.end());
	printDeque(d1);

	d1.erase(d1.begin());
	printDeque(d1);

	d1.clear();
	printDeque(d1);
}

//���ݴ�ȡ
void test05()
{
	deque<int>d1;
	for (int i = 0; i < 5; i++)
	{
		d1.push_back((i + 1) * 10);
	}
	printDeque(d1);

	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1.at(i) << " ";
	}
	cout << endl;
}

//deque����
void test06()
{
	deque<int>d1;
	for (int i = 0; i < 3; i++)
	{
		d1.push_back((i + 1) * 10);
		d1.push_front((i + 1) * 100);
	}
	printDeque(d1);
	sort(d1.begin(),d1.end());
	printDeque(d1);

}
int main()
{
	test06();
	return 0;
}
