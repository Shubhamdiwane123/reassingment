#include<stdio.h>
int fib(int n)
{
	if(n==1)
		return 0;
	if(n==2)
		return 1;
	return(fib(n-2)+fib(n-1));
}
int main()
{
	int n,f=0,max=0,min=0;
	printf("enter range min to max\n");
	scanf("%d%d",&min,&max);
	printf("fibonaci series from %d to %d is -- ",min,max);
	for(n=min;n<max;n++)
	{
		f=fib(n);
		printf("%d,",f);
	}
}
