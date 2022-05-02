#include<stdio.h>
void swap(int num1,int num2);
void swap(int num1,int num2)
{
	printf("before the swap num1=%d num2=%d\n",num1,num2);
	num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;
	printf("after the swap num1=%d num2=%d\n",num1,num2);

}
