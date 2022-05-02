#include<stdio.h>
void clear(int n,int pos);
void clear(int n,int pos)
{
	int bit;
	printf("before the clear bit\n");
	for(bit=31;bit>=0;bit--)
		printf("%d ",(n>>bit)&1);
	n=n&(~(1<<pos));
	printf("after the clear bit\n");
	for(bit=31;bit>=0;bit--)
		printf("%d ",(n>>bit)&1);
}

