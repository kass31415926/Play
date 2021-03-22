#include <stdio.h>

int main()
{
	printf("1\n");
	for(int i=2;i<100;i++){
		if(i*i<100){
		for(int j=i;j<100;j*=j)
		printf("%d\n",j);
	}
   }
	return 0;
}
