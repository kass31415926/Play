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

		cout << "����������ѡ��" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1://��ʼ����
			sm.startSpeech();
			break;
		case 2://�鿴�����¼
			sm.showRecord();
			break;
		case 3://��ձ�����¼
			sm.clearRecord();
			break;
		case 0://�˳�����
			sm.exitSystem();
			break;
		default:
			system("cls");
			break;
		}
	}

	return 0;
}