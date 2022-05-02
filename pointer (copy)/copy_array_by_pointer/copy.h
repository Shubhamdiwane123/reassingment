#include<stdio.h>

void copy(int *,int *,int );

void copy(int *arr2,int *arr1,int len)
{
	int i;
	printf("After copy the array1 to array2: \n");
	for(i=0;i<len;i++)
	{
		*(arr2+i)=*(arr1+i);
		printf("%d\t",*(arr2+i));
	}
	printf("\n");
}
