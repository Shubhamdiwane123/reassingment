#include<stdio.h>

void Sort_Array(int *,int);

void Sort_Array(int *arr,int len)
{
	int i,j,temp;
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1-i;j++)
		{
			if((*(arr+j))>(*(arr+j+1)))
			{
				temp=(*(arr+j));
				(*(arr+j))=(*(arr+j+1));
				(*(arr+j+1))=temp;
			}
		}
	}
	printf("After Sorting an array: \n");
	for(i=0;i<len;i++)
	{
		printf("%d\t",*(arr+i));
	}
	printf("\n");
}
