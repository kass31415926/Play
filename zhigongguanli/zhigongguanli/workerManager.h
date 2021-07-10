#pragma once//防止头文件重复包含
#include <iostream>
#include"worker.h"
#include"employee.h"
#include"boss.h"
#include"manager.h"
#include <fstream>
#define FILENAME "empFile.txt"
using namespace std;

class WorkerManager
{
public:

	WorkerManager();

	//展示菜单
	void Show_Menu();

	//退出功能
	void ExitSystem();

	//记录职工人数
	int m_EmpNum;

	//职工数组指针
	Worker** m_EmpArray;

	//添加职工
	void Add_Emp();

	//保存文件
	void save();

	//判断文件为空的标志
	bool m_FileIsEmpty;

	//统计文件中人数
	int get_EmpNum();

	//初始化职工
	void init_Emp();

	//显示职工信息
	void Show_Emp();

	//判断职工是否存在,存在返回所在数组位置
	int IsExist(int id);

	//删除职工
	void Del_Emp();

	//修改职工
	void Mod_Emp();

	//查找职工
	void Find_Emp();

	//按职工序号排序
	void Sort_Emp();

	//清空文件
	void Clean_File();

	~WorkerManager();
};


