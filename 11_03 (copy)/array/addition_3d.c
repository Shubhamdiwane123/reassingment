#include<stdio.h>
#define ROW 2
#define COL 2
#define SIZE 2
int main()
{
	int arr1[SIZE][ROW][COL],arr2[SIZE][ROW][COL],arr3[SIZE][ROW][COL],i,j,k;
	printf("enter the %d 2-D array1 (%d x %d):\n",SIZE,ROW,COL);
	for(i=0;i<SIZE;i++)
		for(j=0;j<ROW;j++)
		{
			printf("enter the element\n");
			for(k=0;k<COL;k++)
				scanf("%d",&arr1[i][j][k]);
		}
	printf("the 1st array:\n");
	  for(i=0;i<SIZE;i++,printf("\n")) 
                for(j=0;j<ROW;j++,printf("\n"))
                        for(k=0;k<COL;k++)
                                printf("%d ",arr1[i][j][k]);
	   printf("enter the %d 2-D array2 (%d x %d):\n",SIZE,ROW,COL);
        for(i=0;i<SIZE;i++)
                for(j=0;j<ROW;j++)
                {
                        printf("enter the element\n");
                        for(k=0;k<COL;k++)
                                scanf("%d",&arr2[i][j][k]);
                }
        printf("the 2nd array:\n");
          for(i=0;i<SIZE;i++,printf("\n"))
                for(j=0;j<ROW;j++,printf("\n"))
                        for(k=0;k<COL;k++)
                                printf("%d ",arr2[i][j][k]);

	  for(i=0;i<SIZE;i++,printf("\n"))
                for(j=0;j<ROW;j++,printf("\n"))
                        for(k=0;k<COL;k++)
                                arr3[i][j][k]=arr1[i][j][k]+arr2[i][j][k];
	  printf("addition of two array is:\n");
	  for(i=0;i<SIZE;i++,printf("\n"))
                for(j=0;j<ROW;j++,printf("\n"))
                        for(k=0;k<COL;k++)
                                printf("%d ",arr3[i][j][k]);




}
