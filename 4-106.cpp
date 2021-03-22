#include <stdio.h>

int main()
{
	int a=0,b=0;
	char x=0;
	scanf("%d %d %c",&a,&b,&x);
	switch(x){
		case '+':printf("%d %c %d = %d",a,x,b,a+b);break;
		case '-':printf("%d %c %d = %d",a,x,b,a-b);break;
		case '*':printf("%d %c %d = %d",a,x,b,a*b);break;
		case '/':printf("%d %c %d = %d",a,x,b,a/b);break;
		default:printf("error\a");
	}
	return 0;
}
