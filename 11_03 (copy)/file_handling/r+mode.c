#include<stdio.h>
int main()
{
	FILE *fp=fopen("file.txt","r+");
	if(fp)
		printf("file opened successfully");
	else
		printf("file not open");
	char c;
	fputc(' ',fp);
	fputc('h',fp);
	fputc('e',fp);
	fputc('n',fp);

	fclose(fp);
	rewind(fp);
	fp=fopen("file.txt","r");
	while((c=fgetc(fp))!=EOF)
		printf("%c",c);
	fclose(fp);

}
