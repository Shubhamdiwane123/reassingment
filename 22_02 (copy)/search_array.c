#include<stdio.h>
#define MAX_SIZE 100
int i,l;
int search(int,int*,int);
int main()
{
	int n,m;
	int a[MAX_SIZE];
	int (*fptr)(int,int*,int);
	fptr=search;
	printf("enter the size of array:");
	scanf("%d",&n);
	
	printf("enter the element\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("enter the element to be searched");
	scanf("%d",&m);
	fptr(n,a,m);
	return 0;
}
int search(int n,int *a,int m)
{
	enum check{NF,F};
	int *const ptr=a;
	int index;
	for(i=0;i<n;i++)
	{
		if(m==ptr[i])
		{
			index=i;
			l=F;
			break;
		}
	}
	if(l==F)
		printf("%d is present in the array at %d",m,index);
	else
		printf("%d is not present in the array",m);
}
