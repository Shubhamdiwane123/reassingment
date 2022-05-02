#include<stdio.h>
int main()
{
	FILE *fp=fopen("file.txt","a");
	if(fp)
		printf("file opened successful\n");
	else
		printf("file not opened successful\n");
	char c;
	fputc(' ',fp);
	fputc('h',fp);
	fputc('i',fp);
	fclose(fp);
	rewind(fp);
	fp=fopen("file.txt","r");
	while((c=getc(fp))!=EOF)
		printf("%c",c);
	fclose(fp);
}
