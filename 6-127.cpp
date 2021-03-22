#include <stdio.h>

int main()
{
	int a[30]={2},b[6];
	for(int i=0;i<30;i++)
	{
		a[i+1]=a[i]+2;
	}
	int i=0;
	for(int j=0;j<6;j++)
	{
		if(i<30){
		 b[j]=(a[i]+a[i+1]+a[i+2]+a[i+3]+a[i+4])/5;
	     i+=5;
	    }
	}
	for(int x=0;x<30;x++)printf("%d ",a[x]);
	for(int x=0;x<6;x++)printf("%d ",b[x]);
	return 0;
}
