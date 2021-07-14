#include <iostream>
using namespace std;
#include <stack>

//stack

void test01()
{
	stack<int>s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	while (!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}
	cout << s.size();
}

int main()
{
	test01();
	return 0;
}