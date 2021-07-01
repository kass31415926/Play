#include <iostream>
#include <string>
using namespace std;

//void swap(int a, int b);
//函数的定义
//void swap(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//}
//int main() {
//	int a = 10, b = 20;
//	swap(a, b);
//	return 0;
//}
//void maopao_Sort(int* arr, int len) {
//	for (int i = 0; i < len - 1; i++) {
//		int flag = 0;
//		for (int j = 0; j < len - i-1; j++) {
//			if (arr[j] > arr[j+1]) {
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)break;
//	}
//}
//
//void print(int*arr,int len) {
//	for (int i = 0; i < len ; i++)
//		cout << arr[i] << " ";
//}

struct Student 
{
	string name;
	int age;
	int score;
};//创建结构体变量
//创建结构体变量
//struct Student s1
//struct Student s2={}
//定义时创建

struct Teach
{
	int id;
	string name;
	int age;
	Student stu;
};

void printStu(Student s)
{
	cout << s.age << " " << s.name << " " << s.score << endl;
}

void printStu2(const Student *p)//const修饰后不可写
{
	//p->age = 100;
	cout << p->age << " " << p->name << " " << p->score << endl;
}
//int main() {
//	//int a = 0;
//	//int* ap = &a;
//	//cout << ap << endl;
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//cout << "第一个元素" << arr[0] << endl;
//	//int* p = arr;
//	//cout << *(p + 1) << endl;
//	//int arr[10] = { 12,122,3434,55,67,323,66576,767,768,9 };
//	//int len = sizeof(arr) / sizeof(arr[0]);
//	//maopao_Sort(arr, len);
//	//print(arr, len);
//
//	struct Student s1;
//	s1.age = 18;
//	s1.name = "张三";
//	s1.score = 99;
//	//cout << s1.age << s1.name << s1.score << endl;
//	//struct Student s2 = { "李四",18,100 };
//	//cout << s2.age << s2.name << s2.score << endl;
//	//s3.age = 19;
//	//s3.name = "wangwu";
//	//s3.score = 88;
//	//cout << s3.age << s3.name << s3.score << endl;
//
//	/*Student stu_arr[3] = {
//		{"zhangsan",18,100},
//		{"lisi",19,99},
//		{"wangwu",20,0}
//	};
//	for (int i = 0; i < 3; i++)
//		cout << stu_arr[i].age << stu_arr[i].name << stu_arr[i].score << endl;*/
//	
//	//结构体指针 ->操作符
//	//Student s1 = { "kass",20,100 };
//	//Student* p = &s1;
//	//cout << p->name << endl;
//
//	//Teach t1;
//	//t1.age = 40;
//	//t1.id = 01;
//	//t1.name = "wangwu";
//	//t1.stu.age = 19;
//	//t1.stu.name = "zhangsan";
//	//t1.stu.score = 10;
//	//cout << t1.age
//	//	<< t1.id
//	//	<< t1.name
//	//	<< t1.stu.age
//	//	<< t1.stu.name
//	//	<< t1.stu.score << endl;
//
//	printStu(s1);
//	Student* p = &s1;
//	printStu2(p);
//
//	return 0;
//}