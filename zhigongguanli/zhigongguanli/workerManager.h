#pragma once//��ֹͷ�ļ��ظ�����
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

	//չʾ�˵�
	void Show_Menu();

	//�˳�����
	void ExitSystem();

	//��¼ְ������
	int m_EmpNum;

	//ְ������ָ��
	Worker** m_EmpArray;

	//���ְ��
	void Add_Emp();

	//�����ļ�
	void save();

	//�ж��ļ�Ϊ�յı�־
	bool m_FileIsEmpty;

	//ͳ���ļ�������
	int get_EmpNum();

	//��ʼ��ְ��
	void init_Emp();

	//��ʾְ����Ϣ
	void Show_Emp();

	//�ж�ְ���Ƿ����,���ڷ�����������λ��
	int IsExist(int id);

	//ɾ��ְ��
	void Del_Emp();

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//��ְ���������
	void Sort_Emp();

	//����ļ�
	void Clean_File();

	~WorkerManager();
};


