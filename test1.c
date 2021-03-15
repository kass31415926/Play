#include <stdio.h>
#define Max 100

int main()
{
	char str[Max];
	int sum=0;
	int prt[3]={0};
	scanf("%s",&str);
	for(int i=0;;i++){
		if(str[i]){
			sum+=(str[i]-'0');
		}
		else break;
	}
	int j=0;
	do{
		prt[j]=sum%10;
		sum=sum/10;
		j++;
	}while(sum);
    for(int s=j-1;s>=0;){
        switch(prt[s]){
                case 1:printf("yi");break;
                case 2:printf("er");break;
                case 3:printf("san");break;
                case 4:printf("si");break;
                case 5:printf("wu");break;
                case 6:printf("liu");break;
                case 7:printf("qi");break;
                case 8:printf("ba");break;
                case 9:printf("jiu");break;
                case 0:printf("lin");break;
        }
        s--;
        if(s>=0)printf(" ");
    };
    printf("A");
    return 0;
}
