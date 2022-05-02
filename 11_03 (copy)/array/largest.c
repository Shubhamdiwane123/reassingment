#include<stdio.h>
#define SIZE 1000
int main()
{
	int arr[SIZE],i,max=0,max1=0,min=9,min1=9,n;
	printf("enter the size of array\n");
	scanf("%d",&n);

	printf("enter the element\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("array is:\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	i=0;
	while(arr[i])
	{
		if(arr[i]>max)
		{
			max1=max;
			max=arr[i];
		}
		else if(arr[i]>max1)
			max1=arr[i];
		if(arr[i]<min)
		{
			min1=min;
			min=arr[i];
		}
		else if(arr[i]<min1)
			min1=arr[i];
		i++;
	}
	printf("\nlargest value=%d\n secound largest value=%d\n",max,max1);
	printf("smallest element=%d\n secound largest element=%d\n",min,min1);

}
