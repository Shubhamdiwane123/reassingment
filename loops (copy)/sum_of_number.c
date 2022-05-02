#include<stdio.h>
#define SIZE 100
int main()
{
	int n,i,sum=0,arr[SIZE];
	printf("enter the number how much number you want to sum\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the number\n");
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		if(arr[i]>0)
			sum+=arr[i];
		else
		{
			printf("sum is =%d\n",sum);
			printf("the loop is terminated due to negative number is comming\n");
			return 0;
		}
	}
	printf("all number sum is =%d\n",sum);
}
