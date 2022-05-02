#include<stdio.h>
void check(int n);
void check(int n)
{
	if(n&1)
                printf("LSB is set \n");
        else
                printf("LSB is not set \n");
}

