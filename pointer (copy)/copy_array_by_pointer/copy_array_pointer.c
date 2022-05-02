#include"copy.h"
#define SIZE 100

int main()
{
	int arr1[SIZE],arr2[SIZE],len;
	int *a1,*a2;
	a1=arr1;
	a2=arr2;
	printf("Enter length of an array1: ");
	scanf("%d",&len);
	printf("Enter Elements in an array: ");
	for(int i=0;i<len;i++)
	{
		scanf("%d",(a1+i));
	}
	printf("Elements in array1:\n");
	for(int i=0;i<len;i++)
	{
		printf("%d\t",*(a1+i));
	}
	printf("\n\n");
	copy(a2,a1,len);
	return 0;
}
