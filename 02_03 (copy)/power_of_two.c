#include<stdio.h>
int power(int n)
{
	if(n==0)
		return 0;
	while(n!=1)
	{
		if(n%2!=0)
			return 0;
		n=n/2;
	}
	return 1;
}
int main()
{
	int num;
	printf("enter your number\n");
	scanf("%d",&num);

	if(power(num))
		printf("%d is a power of 2",num);
	else
		printf("%d is not power of 2",num);
}

