#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MaxSize 100
#define string strreponse=0；


//顺序表结构体
typedef struct L {
	int date[MaxSize];
	int length;
}SqList;
//1、初始化
int InitList(SqList &L) {
	for (int i = 0; i < L.length; i++)L.date[i] = 0;
	return 1;
}
//2、求表长度
int LengthList(SqList L) {
	return L.length;
}
//3、查找元素e的位置
int LocateElem(SqList L, int e) {
	int i;
	for (i = 0; L.date[i] != e; i++) {
		if (i > L.length)
			return -1;
		else if (L.date[i] == e && i < L.length
			)return i;
	}
}
//4、插入数据至具体位置
void ListInsert(SqList &L, int x, int e) {
	int i;
	for (i = L.length; i > x-1; i--) {
		L.date[i + 1] = L.date[i];
	}
	L.date[i] = e;
	L.length++;
}
//5、删除具体位置数据并且打印数据
int  ListDelete(SqList &L, int i) {
	int x = i-1,e;
	e = L.date[i-1];
	for (; x < L.length; x++) {
		L.date[x] = L.date[x + 1];
	}
	L.length--;
	return e;
}
//6、寻找元素e的位置
void PrintList(SqList L, int e) {
	int i;
	for ( i = 0; i < L.length; i++) {
		if (e == L.date[i]) {
			printf("%d\n", i+1);
			break;
		}
	}
	if(i==L.length)printf("errorr!\n");
}
//7、判空操作
int Empty(SqList L){
	for (int i = 0; i < L.length; i++) {
		if (L.date[i] != 0)return -1;
	}
	return 1;
}
//8、销毁
void DestroyList(SqList &L) {
	for (int i = L.length; i > 0; i++)free(L.date);
	L.length = 0;
}
//9、打印整个表
void ViewList(SqList L) {
	for (int i = 0; i < L.length; i++)
		printf("%d ", L.date[i]);
	printf("\n");
}
//10、输入随机数进入顺序表
void InList(SqList  &L) {
	srand((unsigned)time(NULL));
	L.length = 20;
	for (int i = 0; i < L.length; i++) {
		L.date[i] = rand() % 100 + 1;
		
	}
}
//菜单
void menu1() {
	printf("算法：\n");
	printf("1、顺序表\n");
	printf("2、链表\n");
	printf("3、数组\n");
	printf("4、排序\n");
	printf("5、查找\n");
	printf("-1、退出\n");
}
//单链表结构体
typedef struct LNode {
	int data;
	struct LNode* next;
}LNode ,*LinkList;
void menu2() {
	printf("1、头插法建立单链表\n");
}
//头插法建立单链表
//LinkList List_HeadInsert(LinkList &L) {
//	/*LNode* s=L->next;
//	int x = 0;
//	printf("输入数据\n输入999停止\n");
//	scanf("%d", &x);
//	while (x != 999) {
//		s = (LNode*)malloc(sizeof(LNode));
//		s->data = x;
//		s->next = L->next;
//		L->next = s;
//		scanf("%d", &x);
//	}*/
//	return L;
//}
//遍历单链表
//void ListOrder(LinkList L) {
//	LNode* p = L->next;
//	while (L!=NULL) {
//		printf("%d ", (p->data));
//		p = p->next;
//	}
//	p->next = NULL;
//}
int main()
{
	//SqList L{ L.date[MaxSize] = {0},L.length = 20 };
	int n = 0;
	
	
	//scanf("%d", &n);
	for (; n != -1;) {
		menu1();
		scanf("%d", &n);
		switch (n) {
		case 1: {
			L L1 = { L1.date[MaxSize] = {0},L1.length = 20 };
			printf("1 :InitList\n2 :LengthList\n3 :LocateElem\n4 :ListInsert\n5 :ListDelet\n6 :PrintList\n7 :Empty\n8 :DestoryList\n9 :ViewList\n10 :InList\n");
			int n = 0;
			for (; n != -1;) {
				scanf("%d", &n);
				if (n == -1)break;
				switch (n) {
				case 1:InitList(L1); break;
				case 2: {int length = LengthList(L1);
					printf("%d\n", length);
				} break;
				case 3: {
					int e = 0;
					scanf("%d", &e);
					LocateElem(L1, e);
				}; break;
				case 4: {
					int i, e;
					printf("位置=\n元素数据=\n");
					scanf("%d %d", &i, &e);
					ListInsert(L1, i, e); }; break;
				case 5: {
					int i, x;
					printf("位置=\n");
					scanf("%d", &i);
					x = ListDelete(L1, i);
					printf("%d\n", x);
				}; break;
				case 6: {
					int e = 0;
					printf("输入数据=\n");
					scanf("%d", &e);
					PrintList(L1, e);
				} break;
				case 7:printf("%d\n", Empty(L1)); break;
				case 8:DestroyList(L1); break;
				case 9:ViewList(L1); break;
				case 10:InList(L1); break;
				default:printf("error!\n");
				}
			}

		}; break;
		case 2: {do {
			menu2();
			int n = 0;
			LinkList L2;
			L2 = (LNode*)malloc(sizeof(LNode));
			L2->data = 0;
			L2->next = NULL;
			scanf("%d", &n);
			switch (n)
			{
			case 1: {
				int x = 0;
				printf("输入数据\n输入999停止\n");
				scanf("%d", &x);
				while (x != 999) {
					LNode* s;
					s = (LNode*)malloc(sizeof(LNode));
					s->data = x;
					s->next = L2->next;
					L2->next = s;
					scanf("%d", &x);
				}
			}break;//List_HeadInsert(L2); break;
			case 2: {
				LNode* p = L2->next;
				while (L2 != NULL) {
					printf("%d ", (p->data));
					p = p->next;
				}
				p->next = NULL;
			}break;//ListOrder(L2); break;
			default:
				break;
			}
		} while (n != -1);
		}
		}
	}
	return 0;
}