#include<stdio.h>
int main()
{
	FILE *fp=fopen("file.txt","r");
	if(fp)
		printf("file opend");
	else 
		printf("not");
}

