#define _CRT_SECURE_NO_WARNINGS
#define MaxSize 100


//1 :InitList
//2 : LengthList
//3 : LocateElem
//4 : ListInsert
//5 : ListDelet
//6 : PrintList
//7 : Empty
//8 : DestoryList
typedef struct {
	int date[MaxSize];
	int length;
}SqList;
int InitList(SqList L){
	
	return 1;
}
int LengthList(SqList L) {
	int i;
	for ( i = 0; L.date[i] != 0; i++);
	return i;
}
int LocateElem(SqList L,int e) {
	int i;
	for (i = 0; L.date[i] != e; i++) {
		if (i > L.length)
			return -1;
		else if (L.date[i] == e && i < L.length
			)return i;
	}
}
void ListInsert(SqList L, int i, int e) {
	int x;
	for (x = L.length; x >= i; i++) {
		L.date[x + 1] = L.date[x];
	}
	L.date[x] = e;
}
void ListDelete(SqList L, int i, int e) {
	int x=i;
	e = L.date[i];
	for (; x < L.length ; x++) {
		L.date[x] = L.date[x + 1];
	}
}
void PrintList(SqList L, int e) {
	for (int i = 0; i < L.length; i++) {
		if (e == L.date[i])
			printf("%d\n", L.date[i]);
		else printf("errorr!\n");
	}
}