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

//设计演讲管理类
class SpeechMahager
{
public:

	//构造函数
	SpeechMahager();

	//菜单函数
	void show_Menu();

	//退出菜单
	void exitSystem();

	//创建选手
	void createSpeaker();

	//开始比赛
	void startSpeech();

	//抽签
	void speechDraw();

	//比赛
	void speechContest();

	//展示比赛结果
	void show_Score();

	//保存文件
	void saveRecord();

	//析构函数
	~SpeechMahager();

	//初始化属性
	void initSpeech();

	//读取文件
	void loadRecord();

	//显示往届得分
	void showRecord();

	//清空数据
	void clearRecord();

	//成员属性
	vector<int>v1;

	vector<int>v2;

	vector<int>vVictory;

	map<int, Speaker>m_Speaker;

	map<int, vector<string>>m_Record;

	bool fileIsEmpty;

	int m_Index;
};