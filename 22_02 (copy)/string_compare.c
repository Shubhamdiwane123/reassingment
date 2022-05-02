#include<stdio.h>
#define SIZE 50
int cmp(char const*a,char const*b)
{
	int i=0;
	while(*a!=0 && *b!=0 && *a==*b)
	{
		*a++;
		*b++;
	}
	if(*a==*b)
		return 0;
	else
		return(*a-*b);
}

int main()
{
	char a[SIZE],b[SIZE];
	int (*fp)(char*,char*);
	fp=cmp;
	printf("enter string:\n");
	scanf("%s %s",a,b);
	printf("%d\n",fp(a,b));
}
