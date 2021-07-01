#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//毕业设计：一个老师带五个学生，老师的属性有姓名和学生数组，学生属性有姓名和成绩


struct Student
{
	string s_name;
	int s_score;
};

struct Teacher
{
	string t_name;
	struct Student s_arr[5];
};

//赋值函数
void allocateSpace(struct Teacher tarr[], int len)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tarr[i].t_name = "Teach_";
		tarr[i].t_name += nameSeed[i];
		for (int j = 0; j < 5; j++)
		{
			tarr[i].s_arr[j].s_name = "Student_";
			tarr[i].s_arr[j].s_name += nameSeed[j];
			
			int random = rand() % 61 + 40;
			tarr[i].s_arr[j].s_score = random;


		}
	}
}

//打印函数
void printInfo(Teacher tarr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名" << tarr[i].t_name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名" << tarr[i].s_arr[j].s_name << "\t学生分数" << tarr[i].s_arr[j].s_score << endl ;
		}
		cout << endl;
	}
}

int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	//创建老师数组
	Teacher tarr[3];
	int len = sizeof(tarr) / sizeof(tarr[0]);

	//赋值
	allocateSpace( tarr, len);

	//打印信息
	printInfo(tarr, len);

	return 0;
}