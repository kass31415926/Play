#include <iostream>
using namespace std;
#include "speechManager.h"

int main()
{
	SpeechMahager sm;

	int choice = 0;

	while (true)
	{
		sm.show_Menu();

		cout << "请输入您的选择：" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1://开始比赛
			sm.startSpeech();
			break;
		case 2://查看往届记录
			sm.showRecord();
			break;
		case 3://清空比赛记录
			sm.clearRecord();
			break;
		case 0://退出比赛
			sm.exitSystem();
			break;
		default:
			system("cls");
			break;
		}
	}

	return 0;
}