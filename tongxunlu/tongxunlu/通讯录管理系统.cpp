#include <iostream>
#include <string>
using namespace std;

const int Max = 1000;

//联系人结构体
struct Person
{
	//姓名
	string m_Name;
	//性别
	int m_nSex;
	//年龄
	int m_Age;
	//电话
	string m_Phone;
	//住址
	string m_Addr;
};

//通讯录结构体
struct Addressbooks
{
	//联系人数组
	struct Person personArray[Max];
	//联系人个数
	int m_Size = 0;
};

//1、添加功能
void addPerson(Addressbooks* abs)
{
	//判断是否已满，满了就不再添加
	if (abs->m_Size == Max)
	{
		cout << "通讯录已满！" << endl;
		return;
	}
	else
	{
		//添加操作
		
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		
		//性别
		cout << "请输入性别：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		int sex = 0;

		cin >> sex;
		while (true)
		{
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_nSex = sex;
				break;
			}
			cout << "输入有误,重新输入！" << endl;
		}

		//年龄
		cout << "请输入年龄" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//电话
		cout << "请输入电话：" << endl;;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//住址
		cout << "请输入地址：" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//更新联系人人数
		abs->m_Size++;

		cout << "添加成功！" << endl;

		system("pause");
		//清屏操作
		system("cls");
	}
}

//2、显示功能
void showPerson(Addressbooks* abs)
{
	//首先判空，判空则显示为0
	if (abs->m_Size == 0)
		cout << "当前记录为空！" << endl;
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_Name << "\t";
			cout << "性别：" << ( abs->personArray[i].m_nSex == 1 ? "男" : "女" ) << "\t";
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话：" << abs->personArray[i].m_Phone << "\t";
			cout << "住址：" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//检测联系人是否存在，存在返回数组序号，否则返回-1
int isExist(Addressbooks* abs, string name) 
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}

//3、删除功能
void deletPerson(Addressbooks* abs) 
{
	cout << "请输入删除联系人名字：" << endl;

	string name;
	cin >> name;

	//ret == -1 未查到
	//ret != -1 查到了
	int ret = isExist(abs, name);
	
	if (ret != -1)
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "删除成功" << endl;
	}
	else
		cout << "查无此人！" << endl;

	system("pause");
	system("cls");
}

//4、查看联系人
void findPerson(Addressbooks* abs)
{
	cout << "请输入查找的联系人姓名" << endl;
	string name;
	cin >> name;

	//检测联系人是否存在
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "未找到联系人！" << endl;
	}
	else
	{
		cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
		cout << "性别：" << (abs->personArray[ret].m_nSex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
		cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
		cout << "住址：" << abs->personArray[ret].m_Addr << endl;
	}

	system("pause");
	system("cls");
}

//5.修改联系人
void modifyPerson(Addressbooks* abs)
{
	cout << "请输入修改联系人姓名：" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		
		//性别
		int sex = 0;
		cout << "请输入性别：" << endl;
		cin >> sex;
		while (true)
		{
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_nSex = sex;
				break;
			}
			cout << "输入有误,重新输入！" << endl;
		}

		//年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//电话
		cout << "请输入电话：" << endl;;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//住址
		cout << "请输入地址：" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
	}
	else
	{
		cout << "未找到联系人！" << endl;
	}

	system("pause");
	system("cls");
}

//6、清空通讯录
void cleanPerson(Addressbooks* abs)
{
	cout << "是否清空" << endl << "1 -- 确定" << endl << "2 -- 返回" << endl;
	int ret = 0;
	cin >> ret;
	if (ret == 1) 
	{
		abs->m_Size = 0;
		cout << "通讯录已清空！" << endl;
	}

	system("pause");
	system("cls");
}

//菜单界面
void show_menu()
{
	cout << "*************************" << endl;
	cout << "***** 1、添加联系人 *****" << endl;
	cout << "***** 2、显示联系人 *****" << endl;
	cout << "***** 3、删除联系人 *****" << endl;
	cout << "***** 4、查找联系人 *****" << endl;
	cout << "***** 5、修改联系人 *****" << endl;
	cout << "***** 6、清空联系人 *****" << endl;
	cout << "***** 0、推出通讯录 *****" << endl;
	cout << "*************************" << endl;
}


int main()
{
	//创建结构体变量
	Addressbooks abs;

	//用户选择变量
	int select = 0;
	while (true)
	{
		//菜单调用
		show_menu();

		cin >> select;//功能选择

		switch (select)
		{
		case 1://添加联系人
			addPerson(&abs);
			break;
		case 2://显示联系人
			showPerson(&abs);
			break;
		case 3://删除联系人
			deletPerson(&abs);
		//{
		//	cout << "请输入删除联系人姓名：" << endl;
		//	string name;
		//	cin >> name;
		//	if (isExist(&abs,name) == -1)
		//		cout << "查无此人！" << endl;
		//	else
		//	{
		//		cout << "查到此人！" << endl;
		//	}
		//}
			break;
		case 4://查找联系人
			findPerson(&abs);
			break;
		case 5://修改联系人
			modifyPerson(&abs);
			break;
		case 6://清空联系人
			cleanPerson(&abs);
			break;
		case 0://推出通讯录
			cout << "欢迎下次使用！" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	return 0;
}