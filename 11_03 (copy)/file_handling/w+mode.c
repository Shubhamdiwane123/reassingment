#include<stdio.h>
int main()
{
	FILE *fp=fopen("string.txt","w+");
	if(fp)
		printf("file open successfuly\n");
	else
		printf("file not open\n");
	char str[20]="Thundersoft";
	char str1[20];
	fputs(str,fp);
	rewind(fp);
	fgets(str1,12,fp);
	printf("%s\n",str1);
	fclose(fp);
}
