#include <stdio.h>

int main()
{
	int x =1,sum =0,i =0;
	double average =0;
	for(x=2;x<=100;x=x*2){
		sum+=(0.8*x);
		i++;
	}
	average=sum/i;
	printf("Æ½¾ùÖµ=%f\n",average);
	return 0;
}
