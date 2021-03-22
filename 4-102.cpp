#include <stdio.h>

int main()
{
	int n=0;
	scanf("%d",&n);
	if(n%5==0){
		if(n%7==0)
		printf("yes\n");
	}
	else printf("no\n");
	return 0;
}
