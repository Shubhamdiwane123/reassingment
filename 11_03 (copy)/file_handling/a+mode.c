#include<stdio.h>
int main()
{
	FILE *fp=fopen("file.txt","a+");
	if(fp)
		printf("file opened successful\n");
	else
		printf("file opened not successful\n");
	char c;
	fputc(' ',fp);
	fputc('H',fp);
	fputc('E',fp);
	fputc('L',fp);
	fputc('L',fp);
	fputc('O',fp);
	 rewind(fp);
	 while((c=fgetc(fp))!=EOF)
		 printf("%c",c);
	 fclose(fp);
}
