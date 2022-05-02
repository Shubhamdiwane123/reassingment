#include<stdio.h>
int main()
{
	int i,j;
	char c='A';
	for(i=1;i<=5;i++,printf("\n"))
	{ c='A';
		for(j=1;j<=5;j++)
		{
			(j<i)?printf("_"):printf("%c",c);
			c++;
		}
	
	}
}
//ABCDE
//_BCDE
//__CDE
//___DE
//____E

