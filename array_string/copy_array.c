#include<stdio.h>
#define SIZE 50
void copy(int (arr1)[5],int n)
{
	int i,arr2[SIZE];
	for(i=0;i<n;i++)
		arr2[i] = (arr1)[i];
	printf("2nd array elements are :\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n");
}
int main()
{
	int arr1[SIZE],i,n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the 1st array elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	copy(arr1,n);
}
