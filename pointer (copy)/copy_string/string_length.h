#include<stdio.h>

int String_len(char *);

int String_len(char *str)
{
	int i;
	for(i=0;*(str+i)!='\0';i++);
	return i;
}
