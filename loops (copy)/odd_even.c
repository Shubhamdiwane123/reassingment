#include<stdio.h>
int main()
{
	int i,j;
	printf("even no is\n");
	for(i=1;i<=100;i++)
	{
		if(i%2==0)
			printf("%d ",i);
	}
	printf("\n odd no is\n");
	for(i=1;i<=100;i++)
	{
		if(i%2!=0)
			printf("%d ",i);
	}
}

