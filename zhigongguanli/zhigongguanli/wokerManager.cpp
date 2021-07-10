#include "workerManager.h"

WorkerManager::WorkerManager()
{

	//1、文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//读文件

	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		//初始化属性
		this->m_EmpNum = 0;

		this->m_EmpArray = NULL;

		this->m_FileIsEmpty = true;

		ifs.close();
		return;
	}

	//2、文件存在 数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//文件为空
		cout << "文件为空" << endl;
		//初始化属性
		this->m_EmpNum = 0;

		this->m_EmpArray = NULL;

		this->m_FileIsEmpty = true;

		ifs.close();
		return;
	}
	
	//3、文件存在，数据不为空
	int num = this->get_EmpNum();
	//cout << "职工人数为：" << num << endl;
	this ->m_EmpNum= num;

	//开辟空间
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//将数据存到数组中
	this->init_Emp();

	//for (int i = 0; i < this->m_EmpNum; i++)
	//{
	//	cout << "职工编号：" << this->m_EmpArray[i]->m_Id
	//		<< "\t姓名：" << this->m_EmpArray[i]->m_Name
	//		<< "\t部门编号：" << this->m_EmpArray[i]->m_DeptId << endl;
	//}
}

void WorkerManager::Show_Menu()
{
	cout << "******************************************" << endl;
	cout << "***********欢迎使用职工管理系统***********" << endl;
	cout << "*************0、推出管理程序**************" << endl;
	cout << "*************1、增加职工信息**************" << endl;
	cout << "*************2、显示职工信息**************" << endl;
	cout << "*************3、删除离职员工**************" << endl;
	cout << "*************4、修改职工信息**************" << endl;
	cout << "*************5、查找职工信息**************" << endl;
	cout << "*************6、按照编号排序**************" << endl;
	cout << "*************7、清空所有文档**************" << endl;
	cout << "******************************************" << endl;
	cout << endl;
}

void WorkerManager:: ExitSystem() 
{
	cout << "欢迎下次使用！" << endl;
	//system("pause");
	exit(0);
}

void WorkerManager::Add_Emp()
{
	cout << "请输入添加职工数量" << endl;

	int addNum = 0;//进行记录
	cin >> addNum;

	if (addNum > 0)
	{
		//添加
		//计算新添加空间大小
		int newSize = this->m_EmpNum + addNum;//新空间人数=原有人数加上新增加人数
		
		//开辟新空间
		Worker** newSpace = new Worker * [newSize];

		//将原有空间下的数据拷贝到新空间下
		if (this->m_EmpArray != NULL)
		{
			for(int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//批量添加新数据
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect;

			cout << "请输入第" << i + 1 << "个新职工的编号" << endl;
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
						cout << "编号已存在，请重新输入" << endl;
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
			

			cout << "请输入第" << i + 1 << "个新职工的姓名" << endl;
			cin >> name;

			cout << "请选择该职工岗位" << endl;
			cout << "1、普通员工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
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
			//将创建的职工指针保存到数组中
			newSpace[this->m_EmpNum + i] = worker;
		}

		//释放原有空间
		delete[]this->m_EmpArray;

		//更改新空间的指向
		this->m_EmpArray = newSpace;

		//更新新的职工人数1
		this->m_EmpNum = newSize;

		//更新职工不为空标志
		this->m_FileIsEmpty = false;

		//提示添加成功
		cout << "成功添加" << addNum << "名新职工" << endl;


		this->save();
	}
	else
	{
		cout << "输入有误" << endl;
	}
	system("pause");
	system("cls");
}

void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);//用输出的方式打开文件-写文件
	
	//将每个人数据写入到文件中去
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

		if (dId == 1)//普通职工
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
	//判断文件是否为空
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者记录为空" << endl;
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
			//cout << "找到职工" << endl;
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
		cout << "文件不存在或数据为空" << endl;
	}
	else
	{
		cout << "请输入职工编号：" << endl;
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

			//数据同步到文件中去
			this->save();

			cout << "删除成功" << endl;
		}
		else
		{
			cout << "删除失败，未找到该职工" << endl;
		}

		system("pause");
		system("cls");
	}
}

void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请输入修改职工编号：" << endl;
		int id;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret != -1)
		{
			//找到编号职工

			delete this->m_EmpArray[ret];
			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "查到：" << id << "号职工，请输入新的职工号：" << endl;
			cin >> newId;

			cout << "请输入新的姓名：" << endl;
			cin >> newName;

			cout << "请输入岗位：" << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
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

			//更新数组
			this->m_EmpArray[ret] = worker;

			cout << "修改成功" << endl;

			//保存到文件中
			this->save();
		}
		else
		{
			cout << "修改失败，查无此人" << endl;
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或数据为空" << endl;
	}
	else
	{
		cout << "请输入查找方式：" << endl;
		cout << "1、按照职工编号查找" << endl;
		cout << "2、按照职工姓名查找" << endl;
		int select = 0;
		cin >> select;

		if (select == 1)
		{
			//按照编号查
			int id;
			cout << "请输入职工编号" << endl;
			cin >> id;

			int ret = IsExist(id);
			if (ret != -1)
			{
				//找到职工
				cout << "查找成功，信息如下" << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "查找失败" << endl;
			}
			system("pause");
			system("cls");
		}
		else if (select == 2)
		{
			//按照姓名查
			string name;
			cout << "请输入查找姓名：" << endl;
			cin >> name;
			int flag = 0;

			for (int i = 0; i < m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "查找成功，信息如下：" << endl;
					flag = 1;
					this->m_EmpArray[i]->showInfo();
				}
			}
			if (flag == 0)
			{
				cout << "查找失败" << endl;
			}
			system("pause");
			system("cls");
		}
		else
		{
			cout << "输入有误" << endl;
		}

	}
}

void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或数据为空" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "请选择排序方式" << endl;
		cout << "1、从小到大排序" << endl;
		cout << "2、从大到小排序" << endl;
		int select = 0;
		cin >> select;

		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i;
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (select == 1)//升序
				{
					if (this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[i]->m_Id)
					{
						minOrMax = j;
					}
				}
				else//降序
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
		cout << "排序成功，结果为：" << endl;
		this->save();
		this->Show_Emp();
	
	}
}

void WorkerManager::Clean_File()
{
	cout << "确认是否清空" << endl;
	cout << "1、确认清空" << endl;
	cout << "2、重新选择" << endl;
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
		cout << "清空成功" << endl;

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