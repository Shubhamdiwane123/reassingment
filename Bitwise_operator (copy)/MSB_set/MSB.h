#include<stdio.h>
void check(int n);
void check(int n)
{
	int msb;
	  msb=1<<(32-1);
        if(n & msb)
                printf("MSB is set\n");
        else
                printf("MSB is not set\n");
}

