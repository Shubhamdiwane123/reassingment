#include<stdio.h>
#define ROW 2
#define COL 2
int main()
{
	int arr[ROW][COL],arr1[ROW][COL],arr2[ROW][COL],i,j;
	
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
		{
			printf("enter the element\n");
			scanf("%d",&arr[i][j]);
		}
	printf("arr is:\n");
	for(i=0;i<ROW;i++,printf("\n"))
		for(j=0;j<COL;j++)
			printf("%d ",arr[i][j]);
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
		{
			printf("enter the element\n");
			scanf("%d",&arr1[i][j]);
		}
	printf("arr1 is:\n");
	for(i=0;i<ROW;i++,printf("\n"))
		for(j=0;j<COL;j++)
			printf("%d ",arr1[i][j]);
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
			arr2[i][j]=arr[i][j]+arr1[i][j];
	printf("addition of two array:\n");
	for(i=0;i<ROW;i++,printf("\n"))
		for(j=0;j<COL;j++)
			printf("%d ",arr2[i][j]);
}
