#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Áù¸öËæ»úÊı 
int main()
{
	srand(time(NULL));
	int arr[6]={0};
	for(int i=0;i<6;){
		arr[i]=rand()%6+1;
		int bol=0;
		for(int j=0;j<i;j++){
			if(arr[i]==arr[j])bol=1;
		}
		if(bol==0)i++;
		}
	for(int i=0;i<6;i++)printf("%d ",arr[i]);
	return 0;
}
