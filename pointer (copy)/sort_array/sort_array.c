#include"sort_array.h"

int main()
{
	int arr[100],len,i;
	printf("Enter a length of array: ");
	scanf("%d",&len);
	printf("Enter the numbers in an array:\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Elements in an array:\n");
	for(i=0;i<len;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	int *a;
	a=arr;
	Sort_Array(a,len);
	return 0;
}
