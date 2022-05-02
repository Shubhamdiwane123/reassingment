#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	int i,j;
	char *p=NULL;

	puts("enter the string\n");
	gets(str);

	for(i=0;str[i];i++)
	{
		while(p=strchr(str+i+1,str[i]))
			memmove(p,p+1,strlen(p+1)+1);
	}
	puts(str);
}



