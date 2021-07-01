#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//��ҵ��ƣ�һ����ʦ�����ѧ������ʦ��������������ѧ�����飬ѧ�������������ͳɼ�


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

//��ֵ����
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

//��ӡ����
void printInfo(Teacher tarr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ����" << tarr[i].t_name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ������" << tarr[i].s_arr[j].s_name << "\tѧ������" << tarr[i].s_arr[j].s_score << endl ;
		}
		cout << endl;
	}
}

int main()
{
	//���������
	srand((unsigned int)time(NULL));

	//������ʦ����
	Teacher tarr[3];
	int len = sizeof(tarr) / sizeof(tarr[0]);

	//��ֵ
	allocateSpace( tarr, len);

	//��ӡ��Ϣ
	printInfo(tarr, len);

	return 0;
}