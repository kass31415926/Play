#include <stdio.h>

int main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			b[j][i]=a[i][j];
		}
	}
	for(int x=0;x<3;x++){
	printf("\n");
	for(int y=0;y<2;y++)printf("%d ",b[x][y]);
	}return 0;
}
