#include <iostream>
#include <string>
using namespace std;

//������
class CPU
{
public:
	virtual void calculate() = 0;
};

//�Կ�
class VideoCard
{
public:
	virtual void display() = 0;
};

//�ڴ���
class Memory
{
public:
	virtual void storage() = 0;
};

//������
class Computer
{
public:

	Computer(CPU* cpu,VideoCard* vc,Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	void work()
	{
		m_cpu->calculate();

		m_vc->display();

		m_mem->storage();
	}

	//�ṩһ�����������ͷ������������
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}

		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}

		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	
	CPU* m_cpu;

	VideoCard* m_vc;
	
	Memory* m_mem;

};

//Inter
class Inter1CPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Inter��cpu��ʼ����" << endl;
	}
};

class Inter1VideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Inter���Կ���ʼ����" << endl;
	}
};

class Inter1Memory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Inter���ڴ�����ʼ����" << endl;
	}
};

//Lenovo
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo��cpu��ʼ����" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ����" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo���ڴ�����ʼ����" << endl;
	}
};

void test01()
{
	//������һ̨�������
	CPU* interlCpu = new Inter1CPU;
	VideoCard* interCard = new Inter1VideoCard;
	Memory* interlMem = new Inter1Memory;

	//������һ̨����
	Computer* computer1 = new Computer(interlCpu, interCard, interlMem);
	computer1->work();
	delete computer1;

	//�����ڶ�̨�������
	CPU* lenovoCpu = new LenovoCPU;
	VideoCard* lenovoCard = new LenovoVideoCard;
	Memory* lenovoMem = new LenovoMemory;

	//������̨����
	Computer* computer2 = new Computer(lenovoCpu, lenovoCard, lenovoMem);
	computer2->work();
	delete computer2;
}

int main()
{
	test01();
	return 0;
}