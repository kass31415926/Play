#include <iostream>
#include <string>
#include <fstream>
#include "workerManager.h"
#include"worker.h"
#include"employee.h"
#include"boss.h"
#include"manager.h"
using namespace std;

int main()
{
	//���Դ���
	//Worker* worker = NULL;
	//worker = new Employee(1, "����", 1);
	//worker->showInfo();
	//delete worker;

	//worker = new Manager(2, "����", 2);
	//worker->showInfo();
	//delete worker;

	//worker = new Boss(3, "����", 3);
	//worker->showInfo();
	//delete worker;

	//ʵ���������߶���
	WorkerManager wm;

	//�û�ѡ��
	int choice = 0;

	while (true)
	{
		//����չʾ�˵�
		wm.Show_Menu();
		cout << "����������ѡ��" << endl;

		cin >> choice;
		switch (choice)
		{
		case 1://����ְ��
			wm.Add_Emp();
			break;
		case 2://��ʾְ��
			wm.Show_Emp();
			break;
		case 3://ɾ��ְ��
			wm.Del_Emp();
			break;
		case 4://�޸�ְ��
			wm.Mod_Emp();
			break;
		case 5://����ְ��
			wm.Find_Emp();
			break;
		case 6://���������
			wm.Sort_Emp();
			break;
		case 7://��������ĵ�
			wm.Clean_File();
			break;
		case 0://�˳�ϵͳ
			wm.ExitSystem();
			break;
		default:
			system("cls");
			break;
		}
	}

	

	return 0;
}