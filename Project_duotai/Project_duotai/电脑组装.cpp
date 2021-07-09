#include <iostream>
#include <string>
using namespace std;

//处理器
class CPU
{
public:
	virtual void calculate() = 0;
};

//显卡
class VideoCard
{
public:
	virtual void display() = 0;
};

//内存条
class Memory
{
public:
	virtual void storage() = 0;
};

//电脑类
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

	//提供一个析构函数释放三个电脑零件
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
		cout << "Inter的cpu开始工作" << endl;
	}
};

class Inter1VideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Inter的显卡开始工作" << endl;
	}
};

class Inter1Memory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Inter的内存条开始工作" << endl;
	}
};

//Lenovo
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo的cpu开始工作" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo的显卡开始工作" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的内存条开始工作" << endl;
	}
};

void test01()
{
	//创建第一台电脑零件
	CPU* interlCpu = new Inter1CPU;
	VideoCard* interCard = new Inter1VideoCard;
	Memory* interlMem = new Inter1Memory;

	//创建第一台电脑
	Computer* computer1 = new Computer(interlCpu, interCard, interlMem);
	computer1->work();
	delete computer1;

	//创建第二台电脑零件
	CPU* lenovoCpu = new LenovoCPU;
	VideoCard* lenovoCard = new LenovoVideoCard;
	Memory* lenovoMem = new LenovoMemory;

	//创建第台电脑
	Computer* computer2 = new Computer(lenovoCpu, lenovoCard, lenovoMem);
	computer2->work();
	delete computer2;
}

int main()
{
	test01();
	return 0;
}