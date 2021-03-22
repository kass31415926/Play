#include <stdio.h>

int main()
{
	int n=0;
	scanf("%d",&n);
	if(n%3==0&&n%5==0&&n%7==0)printf("all\n");
	else if(n%3==0&&n%5==0)printf("3 and 5");
	else if(n%3==0&&n%7==0)printf("3 and 7");
	else if(n%5==0&&n%7==0)printf("5 and 7");
	else if(n%3==0)printf("3");
	else if(n%5==0)printf("5");
	else if(n%7==0)printf("7");
	else printf("no\n");
	return 0;
}
