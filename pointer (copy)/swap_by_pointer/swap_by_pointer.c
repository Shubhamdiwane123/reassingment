#include"swap.h"
int main()
{
	int num1,num2;
	printf("enter the num1 & num2\n");
	scanf("%d%d",&num1,&num2);
	printf("before the swap num1=%d num2=%d\n",num1,num2);

	swap(&num1,&num2);
	printf("after the swap num1=%d num2=%d\n",num1,num2);
}
