#include<iostream>
using namespace std;
void move(int m, char x, char y,char z) {
	if (m == 1)
	{
		cout << "��һ�����Ӵ�" << x << "�ƶ���" << z << endl;
	}
	else
	{
		move(m - 1, x, y, z);
		cout << "��һ�����Ӵ�" << x << "�ƶ���" << z << endl;
	    move(m - 1, y, x, z);
	}
}
int main() {
	int n;
	cout << "����������n=";
	cin >> n;
	cout << "��3����������" << n << "ֻ�̵Ĳ���Ϊ��" << endl;
	move(n, 'A', 'B', 'C');
	return 0;
}