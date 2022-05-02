#include<stdio.h>
int main()
{
	int data,bit,pos,n;
	printf("enter the number\n");
	scanf("%d",&data);
	printf("before set bit:\n");
	for(bit=31;bit>=0;bit--)
		printf("%d ",((data>>bit)&1));
	printf("enter the nth bit to check(0-31):");
	scanf("%d",&n);

	bit=(data>>n)&1;
	printf("The %d bit is  %d",n,bit);

	if(bit==1)
	{
	data=data&(~(1<<n));
	printf("\nafter set bit:\n");
	for(bit=31;bit>=0;bit--)
		printf("%d ",((data>>bit)&1));
	}
}
