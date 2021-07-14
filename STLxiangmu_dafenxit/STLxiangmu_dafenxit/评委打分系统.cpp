#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>

class Person
{
public:
	Person(string name,int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}

	string m_Name;
	int m_Score;

};

void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameSeed[i];

		int score = 0;

		Person p(name, score);

		//将创建的Person对象放入容器中
		v.push_back(p);
	}
}

//打分
void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it < v.end(); it++)
	{
		//将评委的分数 放入deque容器中
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//60-100
			d.push_back(score);
		}

		//cout << "打分：" << endl;
		//for (deque<int>::iterator dit = d.begin(); dit < d.end(); dit++)
		//	cout << *dit << " ";
		//cout << endl;

		//排序
		sort(d.begin(), d.end());

		d.pop_back();
		d.pop_front();

		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit < d.end(); dit++)
		{
			sum += *dit;
		}

		int avg = sum / d.size();

		//将平均分赋值给选手
		it->m_Score = avg;
	}
}

//展示分数
void showScore(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it < v.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << "\t分数：" << (*it).m_Score << endl;
	}
}

int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	//1、创建五名选手
	vector<Person>v;
	createPerson(v);

	//2、给五名选手打分
	setScore(v);
	
	//3、显示最后得分
	showScore(v);
	return 0;

}
