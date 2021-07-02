#include <iostream>
#include <string>
using namespace std;

const int Max = 1000;

//��ϵ�˽ṹ��
struct Person
{
	//����
	string m_Name;
	//�Ա�
	int m_nSex;
	//����
	int m_Age;
	//�绰
	string m_Phone;
	//סַ
	string m_Addr;
};

//ͨѶ¼�ṹ��
struct Addressbooks
{
	//��ϵ������
	struct Person personArray[Max];
	//��ϵ�˸���
	int m_Size = 0;
};

//1����ӹ���
void addPerson(Addressbooks* abs)
{
	//�ж��Ƿ����������˾Ͳ������
	if (abs->m_Size == Max)
	{
		cout << "ͨѶ¼������" << endl;
		return;
	}
	else
	{
		//��Ӳ���
		
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		
		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int sex = 0;

		cin >> sex;
		while (true)
		{
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_nSex = sex;
				break;
			}
			cout << "��������,�������룡" << endl;
		}

		//����
		cout << "����������" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//�绰
		cout << "������绰��" << endl;;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//סַ
		cout << "�������ַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//������ϵ������
		abs->m_Size++;

		cout << "��ӳɹ���" << endl;

		system("pause");
		//��������
		system("cls");
	}
}

//2����ʾ����
void showPerson(Addressbooks* abs)
{
	//�����пգ��п�����ʾΪ0
	if (abs->m_Size == 0)
		cout << "��ǰ��¼Ϊ�գ�" << endl;
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << ( abs->personArray[i].m_nSex == 1 ? "��" : "Ů" ) << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//�����ϵ���Ƿ���ڣ����ڷ���������ţ����򷵻�-1
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

//3��ɾ������
void deletPerson(Addressbooks* abs) 
{
	cout << "������ɾ����ϵ�����֣�" << endl;

	string name;
	cin >> name;

	//ret == -1 δ�鵽
	//ret != -1 �鵽��
	int ret = isExist(abs, name);
	
	if (ret != -1)
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
		cout << "���޴��ˣ�" << endl;

	system("pause");
	system("cls");
}

//4���鿴��ϵ��
void findPerson(Addressbooks* abs)
{
	cout << "��������ҵ���ϵ������" << endl;
	string name;
	cin >> name;

	//�����ϵ���Ƿ����
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "δ�ҵ���ϵ�ˣ�" << endl;
	}
	else
	{
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << (abs->personArray[ret].m_nSex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "סַ��" << abs->personArray[ret].m_Addr << endl;
	}

	system("pause");
	system("cls");
}

//5.�޸���ϵ��
void modifyPerson(Addressbooks* abs)
{
	cout << "�������޸���ϵ��������" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		
		//�Ա�
		int sex = 0;
		cout << "�������Ա�" << endl;
		cin >> sex;
		while (true)
		{
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_nSex = sex;
				break;
			}
			cout << "��������,�������룡" << endl;
		}

		//����
		int age = 0;
		cout << "���������䣺" << endl;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//�绰
		cout << "������绰��" << endl;;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//סַ
		cout << "�������ַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
	}
	else
	{
		cout << "δ�ҵ���ϵ�ˣ�" << endl;
	}

	system("pause");
	system("cls");
}

//6�����ͨѶ¼
void cleanPerson(Addressbooks* abs)
{
	cout << "�Ƿ����" << endl << "1 -- ȷ��" << endl << "2 -- ����" << endl;
	int ret = 0;
	cin >> ret;
	if (ret == 1) 
	{
		abs->m_Size = 0;
		cout << "ͨѶ¼����գ�" << endl;
	}

	system("pause");
	system("cls");
}

//�˵�����
void show_menu()
{
	cout << "*************************" << endl;
	cout << "***** 1�������ϵ�� *****" << endl;
	cout << "***** 2����ʾ��ϵ�� *****" << endl;
	cout << "***** 3��ɾ����ϵ�� *****" << endl;
	cout << "***** 4��������ϵ�� *****" << endl;
	cout << "***** 5���޸���ϵ�� *****" << endl;
	cout << "***** 6�������ϵ�� *****" << endl;
	cout << "***** 0���Ƴ�ͨѶ¼ *****" << endl;
	cout << "*************************" << endl;
}


int main()
{
	//�����ṹ�����
	Addressbooks abs;

	//�û�ѡ�����
	int select = 0;
	while (true)
	{
		//�˵�����
		show_menu();

		cin >> select;//����ѡ��

		switch (select)
		{
		case 1://�����ϵ��
			addPerson(&abs);
			break;
		case 2://��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://ɾ����ϵ��
			deletPerson(&abs);
		//{
		//	cout << "������ɾ����ϵ��������" << endl;
		//	string name;
		//	cin >> name;
		//	if (isExist(&abs,name) == -1)
		//		cout << "���޴��ˣ�" << endl;
		//	else
		//	{
		//		cout << "�鵽���ˣ�" << endl;
		//	}
		//}
			break;
		case 4://������ϵ��
			findPerson(&abs);
			break;
		case 5://�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6://�����ϵ��
			cleanPerson(&abs);
			break;
		case 0://�Ƴ�ͨѶ¼
			cout << "��ӭ�´�ʹ�ã�" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	return 0;
}