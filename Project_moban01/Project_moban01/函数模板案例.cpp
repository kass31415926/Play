//#include <iostream>
//using namespace std;
//
////对数组进行排序
////从大到小
////选择排序
////测试char数组与int数组
//
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<class T>
//void mySort(T arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//
//template<class T>
//void printArray(T arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	char charArr[] = "badcfe";
//	int num = sizeof(charArr) / sizeof(charArr[0]);
//	mySort(charArr, num);
//	printArray(charArr, num);
//}
//
//void test02()
//{
//	int intArr[] = { 7,5,6,9,3,4,1,2,0 };
//	int num = sizeof(intArr) / sizeof(intArr[0]);
//	mySort(intArr, num);
//	printArray(intArr, num);
//}
//
//int main()
//{
//	test02();
//	return 0;
//}