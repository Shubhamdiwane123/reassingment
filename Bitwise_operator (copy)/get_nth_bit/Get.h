#include<stdio.h>
void check(int num,int n)
{
	int bit;
	bit=(num>>n)&1;
        printf("The %d bit is set to %d",n,bit);
}
