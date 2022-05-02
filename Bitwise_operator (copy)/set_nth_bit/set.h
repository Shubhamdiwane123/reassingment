#include<stdio.h>
void set(int n,int pos);
void set(int n,int pos)
{
	int bit;
	printf("before the set \n");
	for(bit=31;bit>=0;bit--)
		printf("%d ",(n>>bit)&1);
	n=n|(1<<pos);
	printf("after the set\n");
	for(bit=31;bit>=0;bit--)
		printf("%d ",(n>>bit)&1);

}
