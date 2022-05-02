#include<stdio.h>
int main()
{
	int i,j;
	int a=9;
	for(i=1;i<=5;i++,printf("\n"))
	{ 
		for(j=1;j<=5;j++)
		{
			(j<i)?printf("_"):printf("%d",a);
		}
		a=a-2;
	}
}
//99999
//_7777
//__55
//___33
//____1

