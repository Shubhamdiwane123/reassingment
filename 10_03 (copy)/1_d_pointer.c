#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	int *data;
	printf("enter the no of element you want to store\n");
	scanf("%d",&n);

	data=(int *) malloc(n*sizeof(int));

	if(data==NULL)
	{
		printf("memrory not allocated\n");
		return 0;
	}
	printf("enter the %d element\n",n);
	for(i=0;i<n;i++)
		scanf("%d",(data+i));
	printf("data is\n");
	for(i=0;i<n;i++)
		printf("%d ,",*(data+i));
}

