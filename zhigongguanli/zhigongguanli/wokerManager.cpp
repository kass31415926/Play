#include "workerManager.h"

WorkerManager::WorkerManager()
{

	//1���ļ�������
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//���ļ�

	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		//��ʼ������
		this->m_EmpNum = 0;

		this->m_EmpArray = NULL;

		this->m_FileIsEmpty = true;

		ifs.close();
		return;
	}

	//2���ļ����� ����Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//�ļ�Ϊ��
		cout << "�ļ�Ϊ��" << endl;
		//��ʼ������
		this->m_EmpNum = 0;

		this->m_EmpArray = NULL;

		this->m_FileIsEmpty = true;

		ifs.close();
		return;
	}
	
	//3���ļ����ڣ����ݲ�Ϊ��
	int num = this->get_EmpNum();
	//cout << "ְ������Ϊ��" << num << endl;
	this ->m_EmpNum= num;

	//���ٿռ�
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//�����ݴ浽������
	this->init_Emp();

	//for (int i = 0; i < this->m_EmpNum; i++)
	//{
	//	cout << "ְ����ţ�" << this->m_EmpArray[i]->m_Id
	//		<< "\t������" << this->m_EmpArray[i]->m_Name
	//		<< "\t���ű�ţ�" << this->m_EmpArray[i]->m_DeptId << endl;
	//}
}

void WorkerManager::Show_Menu()
{
	cout << "******************************************" << endl;
	cout << "***********��ӭʹ��ְ������ϵͳ***********" << endl;
	cout << "*************0���Ƴ��������**************" << endl;
	cout << "*************1������ְ����Ϣ**************" << endl;
	cout << "*************2����ʾְ����Ϣ**************" << endl;
	cout << "*************3��ɾ����ְԱ��**************" << endl;
	cout << "*************4���޸�ְ����Ϣ**************" << endl;
	cout << "*************5������ְ����Ϣ**************" << endl;
	cout << "*************6�����ձ������**************" << endl;
	cout << "*************7����������ĵ�**************" << endl;
	cout << "******************************************" << endl;
	cout << endl;
}

void WorkerManager:: ExitSystem() 
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	//system("pause");
	exit(0);
}

void WorkerManager::Add_Emp()
{
	cout << "���������ְ������" << endl;

	int addNum = 0;//���м�¼
	cin >> addNum;

	if (addNum > 0)
	{
		//���
		//��������ӿռ��С
		int newSize = this->m_EmpNum + addNum;//�¿ռ�����=ԭ��������������������
		
		//�����¿ռ�
		Worker** newSpace = new Worker * [newSize];

		//��ԭ�пռ��µ����ݿ������¿ռ���
		if (this->m_EmpArray != NULL)
		{
			for(int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//�������������
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect;

			cout << "�������" << i + 1 << "����ְ���ı��" << endl;
			while (true)
			{
				if (this->m_FileIsEmpty == true)
				{
					cin >> id;
					break;
				}
				cin >> id;
				int flag = 0;
				for (int i = 0; i < this->m_EmpNum; i++)
				{
					if (this->m_EmpArray[i]->m_Id == id)
					{
						cout << "����Ѵ��ڣ�����������" << endl;
						break;
					}
					else
					{
						flag = 1;
					}
				}
				if (flag == 1)
					break;
			}
			

			cout << "�������" << i + 1 << "����ְ��������" << endl;
			cin >> name;

			cout << "��ѡ���ְ����λ" << endl;
			cout << "1����ͨԱ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id,name,1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			//��������ְ��ָ�뱣�浽������
			newSpace[this->m_EmpNum + i] = worker;
		}

		//�ͷ�ԭ�пռ�
		delete[]this->m_EmpArray;

		//�����¿ռ��ָ��
		this->m_EmpArray = newSpace;

		//�����µ�ְ������1
		this->m_EmpNum = newSize;

		//����ְ����Ϊ�ձ�־
		this->m_FileIsEmpty = false;

		//��ʾ��ӳɹ�
		cout << "�ɹ����" << addNum << "����ְ��" << endl;


		this->save();
	}
	else
	{
		cout << "��������" << endl;
	}
	system("pause");
	system("cls");
}

void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);//������ķ�ʽ���ļ�-д�ļ�
	
	//��ÿ��������д�뵽�ļ���ȥ
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}

	ofs.close();
}

int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;
	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		num++;
	}

	return num;
}

void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;
	int index = 0;

	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker* worker = NULL;

		if (dId == 1)//��ְͨ��
		{
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2)
		{
			worker = new Manager(id, name, dId);
		}
		else if (dId == 3)
		{
			worker = new Boss(id, name, dId);
		}
		this->m_EmpArray[index] = worker;
		
		index++;
	}
	ifs.close();
}

void WorkerManager::Show_Emp()
{
	//�ж��ļ��Ƿ�Ϊ��
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
			{
			this->m_EmpArray[i]->showInfo();
			}
	}
	system("pause");
	system("cls");
}

int WorkerManager::IsExist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			//cout << "�ҵ�ְ��" << endl;
			index = i;

			break;
		}
	}
	return index;
}

void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ�����Ϊ��" << endl;
	}
	else
	{
		cout << "������ְ����ţ�" << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExist(id);

		if (index != -1)
		{
			for (int i = index; i < this->m_EmpNum-1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;

			//����ͬ�����ļ���ȥ
			this->save();

			cout << "ɾ���ɹ�" << endl;
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl;
		}

		system("pause");
		system("cls");
	}
}

void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "�������޸�ְ����ţ�" << endl;
		int id;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret != -1)
		{
			//�ҵ����ְ��

			delete this->m_EmpArray[ret];
			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "�鵽��" << id << "��ְ�����������µ�ְ���ţ�" << endl;
			cin >> newId;

			cout << "�������µ�������" << endl;
			cin >> newName;

			cout << "�������λ��" << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(newId, newName, dSelect);
				break;
			case 2:
				worker = new Manager(newId, newName, dSelect);
				break;
			case 3:
				worker = new Boss(newId, newName, dSelect);
				break;
			default:
				break;
			}

			//��������
			this->m_EmpArray[ret] = worker;

			cout << "�޸ĳɹ�" << endl;

			//���浽�ļ���
			this->save();
		}
		else
		{
			cout << "�޸�ʧ�ܣ����޴���" << endl;
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ�����Ϊ��" << endl;
	}
	else
	{
		cout << "��������ҷ�ʽ��" << endl;
		cout << "1������ְ����Ų���" << endl;
		cout << "2������ְ����������" << endl;
		int select = 0;
		cin >> select;

		if (select == 1)
		{
			//���ձ�Ų�
			int id;
			cout << "������ְ�����" << endl;
			cin >> id;

			int ret = IsExist(id);
			if (ret != -1)
			{
				//�ҵ�ְ��
				cout << "���ҳɹ�����Ϣ����" << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "����ʧ��" << endl;
			}
			system("pause");
			system("cls");
		}
		else if (select == 2)
		{
			//����������
			string name;
			cout << "���������������" << endl;
			cin >> name;
			int flag = 0;

			for (int i = 0; i < m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "���ҳɹ�����Ϣ���£�" << endl;
					flag = 1;
					this->m_EmpArray[i]->showInfo();
				}
			}
			if (flag == 0)
			{
				cout << "����ʧ��" << endl;
			}
			system("pause");
			system("cls");
		}
		else
		{
			cout << "��������" << endl;
		}

	}
}

void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ�����Ϊ��" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��ѡ������ʽ" << endl;
		cout << "1����С��������" << endl;
		cout << "2���Ӵ�С����" << endl;
		int select = 0;
		cin >> select;

		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i;
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (select == 1)//����
				{
					if (this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[i]->m_Id)
					{
						minOrMax = j;
					}
				}
				else//����
				{
					if (this->m_EmpArray[minOrMax]->m_Id <= this->m_EmpArray[i]->m_Id)
					{
						minOrMax = j;
					}
				}
			}
			if (i != minOrMax)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
				this->m_EmpArray[minOrMax] = temp;
			}
		}
		cout << "����ɹ������Ϊ��" << endl;
		this->save();
		this->Show_Emp();
	
	}
}

void WorkerManager::Clean_File()
{
	cout << "ȷ���Ƿ����" << endl;
	cout << "1��ȷ�����" << endl;
	cout << "2������ѡ��" << endl;
	int select = 0;
	cin >> select;

	if (select == 1)
	{
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}

			delete[]this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;


		}
		cout << "��ճɹ�" << endl;

		system("pause");
		system("cls");
	}
	else
	{
		system("cls");
	}
}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[]this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}