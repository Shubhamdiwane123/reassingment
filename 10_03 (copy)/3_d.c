#include<stdio.h>
#define SIZE 4
#define ROW 2
#define COL 2
int main()
{
	int i,j,k;
	int a[SIZE][ROW][COL];

	for(i=0;i<SIZE;i++)
		for(j=0;j<ROW;j++)
			for(k=0;k<COL;k++)
			{
				printf("enter the element\n");
				scanf("%d",&a[i][j][k]);
			}
	printf("\n");
	for(i=0;i<SIZE;i++,printf("\n"))
		for(j=0;j<ROW;j++,printf("\n"))
			for(k=0;k<COL;k++)
				printf("%d ",a[i][j][k]);

}
