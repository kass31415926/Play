#include <stdio.h>

int main()
{
	int a=0,b=0,x=0;
	scanf("%d %d",&a,&b);
	x=(a*a+b*b)/100;
	if((a*a+b*b)>100){
		printf("%d",x);
	}
	else printf("%d",a*a+b*b);
	return 0;
}
