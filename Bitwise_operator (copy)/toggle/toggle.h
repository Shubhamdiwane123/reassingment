#include<stdio.h>
void toggle(int n,int pos);
void toggle(int n,int pos)
{
	int bit;
	printf("before the toggle\n");
	for(bit=32;bit>=0;bit--)
		printf("%d ",(n>>bit)&1);
	n=n^(1<<pos);
	printf("after the toggle\n");
	for(bit=32;bit>=0;bit--)
		printf("%d ",(n>>bit)&1);
}
