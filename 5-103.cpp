#include <stdio.h>

int main()
{
	int x = 0,y = 0,z = 1;
	scanf("%d %d",&x,&y);
	for(;y>0;y--){
		z=x*z;
	}
	printf("%d",(z%1000));
	return 0;
}
