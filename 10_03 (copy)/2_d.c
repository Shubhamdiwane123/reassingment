#include<stdio.h>
#define ROW 4
#define COL 3
int main()
{
	int i,j;
	int arr[ROW][COL]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};// 3*4=12 element
	int arr1[ROW][COL];
	arr1[0][0]=21;
	arr1[0][1]=22;
	arr1[0][2]=23;
	arr1[1][0]=24;
	arr1[1][1]=25;
	arr1[1][2]=26;
	arr1[2][0]=27;
	arr1[2][1]=28;
	arr1[2][2]=29;
	arr1[3][0]=30;
	arr1[3][1]=31;
	arr1[3][2]=32;

	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
		}
	}
	printf("arr1 is:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
			printf("arr1[%d][%d] =%d\n",i,j,arr1[i][j]);
	}
	printf("arr1 address:\n");
	 for(i=0;i<4;i++)
        {
                for(j=0;j<3;j++)
                        printf("arr1[%d][%d] =%p\n",i,j,&arr1[i][j]);
        }


	return 0;

}

