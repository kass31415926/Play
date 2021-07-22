#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include "speaker.h"
#include <algorithm>
#include <deque>
#include <functional>
#include <numeric>
#include <string>
#include <fstream>

//����ݽ�������
class SpeechMahager
{
public:

	//���캯��
	SpeechMahager();

	//�˵�����
	void show_Menu();

	//�˳��˵�
	void exitSystem();

	//����ѡ��
	void createSpeaker();

	//��ʼ����
	void startSpeech();

	//��ǩ
	void speechDraw();

	//����
	void speechContest();

	//չʾ�������
	void show_Score();

	//�����ļ�
	void saveRecord();

	//��������
	~SpeechMahager();

	//��ʼ������
	void initSpeech();

	//��ȡ�ļ�
	void loadRecord();

	//��ʾ����÷�
	void showRecord();

	//�������
	void clearRecord();

	//��Ա����
	vector<int>v1;

	vector<int>v2;

	vector<int>vVictory;

	map<int, Speaker>m_Speaker;

	map<int, vector<string>>m_Record;

	bool fileIsEmpty;

	int m_Index;
};