#include "speechManager.h"

SpeechMahager::SpeechMahager()
{
	this->initSpeech();

	this->createSpeaker();

	this->loadRecord();
}

void SpeechMahager::show_Menu()
{
	cout << "******************************************" << endl;
	cout << "************ ��ӭ�μ��ݽ����� ************" << endl;
	cout << "************ 1����ʼ�ݽ�����  ************" << endl;
	cout << "************ 2���鿴�����¼  ************" << endl;
	cout << "************ 3����ձ�����¼  ************" << endl;
	cout << "************ 0���˳���������  ************" << endl;
	cout << "******************************************" << endl;
}

void SpeechMahager::exitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

void SpeechMahager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		Speaker sp;
		sp.m_Name = name;

		for (int j = 0; j < 2; j++)
		{
			sp.m_Score[j] = 0;
		}

		this->v1.push_back(i + 10001);

		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}
}

void SpeechMahager::startSpeech()
{
	//��һ�ֿ�ʼ
	this->speechDraw();
	//1����ǩ
	this->speechContest();
	//2������
	this->show_Score();
	//3����ʾ�������

	this->m_Index++;
	//�ڶ��ֿ�ʼ
	this->speechDraw();
	//1����ǩ
	this->speechContest();
	//2������
	this->show_Score();
	//3����ʾ���ս��

	//����ṹ���ļ���
	this->saveRecord();

	cout << "����������" << endl;
	system("pause");
	system("cls");
}

void SpeechMahager::speechDraw()
{
	cout << "�� << " << this->m_Index << " >>�ֱ���ѡ�����ڳ�ǩ" << endl;
	cout << "����������������������������" << endl;
	cout << "��ǩ���ݽ�˳������" << endl;

	if (this->m_Index == 1)
	{
		//��һ�ֱ���
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else
	{
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	cout << "����������������������������" << endl;
	system("pause");
	cout << endl;
}

void SpeechMahager::speechContest()
{
	cout << "������������ ��" << this->m_Index << "�ֱ�����ʽ��ʼ����������������" << endl;

	//��ʱ�������ѡ�ֳɼ�
	multimap<double, int, greater<double>>groupScpre;

	int num = 0;

	vector<int>v_Src;//ѡ������
	if (this->m_Index == 1)
	{
		v_Src = v1;
	}
	else
	{
		v_Src = v2;
	}

	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;

		deque<double>d;
		for (int i = 0; i < 10; i++)
		{
			double  score = (rand() % 401 + 600) / 10.f;
			d.push_back(score);
		}
		sort(d.begin(), d.end(), greater<double>());
		d.pop_back();
		d.pop_front();

		double sum = accumulate(d.begin(), d.end(), 0.0f);
		double avg = sum / (double)d.size();

		//��ƽ���ַ���map����

		this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg;
	
		groupScpre.insert(make_pair(avg, *it));

		if (num % 6 == 0)
		{
			cout << "��" << num / 6 << "С������������£�" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScpre.begin(); it != groupScpre.end(); it++)
			{
				cout << "��ţ�" << it->second << "������" << this->m_Speaker[it->second].m_Name
					<<"�ɼ���"<< this->m_Speaker[it->second].m_Score[m_Index - 1] << endl;
			}

			//ȡ��ǰ����
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScpre.begin(); it != groupScpre.end()&&count!=3; it++,count++)
			{
				if (this->m_Index == 1)
				{
					v2.push_back((*it).second);
				}
				else
				{
					vVictory.push_back((*it).second);
				}
			}

			groupScpre.clear();

			cout << endl;
		}
	}
	cout << "������������������" << this->m_Index << "�ֱ�����ϡ���������������" << endl;
	system("pause");
}

void SpeechMahager::show_Score()
{
	cout << "����������������������" << this->m_Index << "�ֽ���������¡���������������" << endl;

	vector<int>v;
	if (this->m_Index == 1)
	{
		v = v2;
	}
	else
	{
		v = vVictory;
	}
	for (vector<int>::iterator it = v.begin(); it != v.end();it++)
	{
		cout << "ѡ�ֱ�ţ�" << *it << "������" << this->m_Speaker[*it].m_Name << "������" << this->m_Speaker[*it].m_Score[this->m_Index-1] << endl;
	}
	cout << endl;

	system("pause");

	system("cls");

}

void SpeechMahager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);
	//��ÿ��ѡ������д���ļ�
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++)
	{
		ofs << *it << "," << this->m_Speaker[*it].m_Score[m_Index] << ",";

	}
	ofs << endl;

	ofs.close();
	cout << "��¼���" << endl;
}

void SpeechMahager::initSpeech()
{
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();

	this->m_Index = 1;
}

void SpeechMahager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in);

	if (!ifs.is_open())
	{
		this->fileIsEmpty = true;
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "�ļ�Ϊ��" << endl;
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	this->fileIsEmpty = false;
	
	ifs.putback(ch);

	string data;
	int index = 0;

	while (ifs >> data)
	{
		//cout << data << endl;
		vector<string>v;

		int pos = -1;
		int start = 0;

		while (true)
		{
			pos = data.find(",", start);
			if (pos == -1)
			{
				break;
			}
			string tmp = data.substr(start, pos - start);

			v.push_back(tmp);
			start = pos + 1;
		}
		this->m_Record.insert(make_pair(index, v));
		index++;
	}
	ifs.close();
}

void SpeechMahager::showRecord()
{
	for (int i = 0; i < this->m_Record.size(); i++)
	{
		cout << "��" << i + 1 << "��"
			<< "�ھ���ţ�" << this->m_Record[i][0] << "�÷֣�" << this->m_Record[i][1] << " "
			<< "�ھ���ţ�" << this->m_Record[i][2] << "�÷֣�" << this->m_Record[i][1] << " "
			<< "�ھ���ţ�" << this->m_Record[i][4] << "�÷֣�" << this->m_Record[i][1] << endl;
	}
	system("pause");
	system("cls");
}

void SpeechMahager::clearRecord()
{
	cout << "ȷ�����" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2������" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();

		this->initSpeech();

		this->createSpeaker();

		this->loadRecord();

		cout << "��ճɹ�" << endl;
	}
	system("pause");
	system("cls");
}

SpeechMahager::~SpeechMahager()
{

}

