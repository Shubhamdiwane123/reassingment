#include<stdio.h>
int main()
{
	FILE *fp=fopen("file.txt","w");
	if(fp)
		printf("file opened successfuly\n");
	else
		printf("file not open\n");
	fclose(fp);
}
