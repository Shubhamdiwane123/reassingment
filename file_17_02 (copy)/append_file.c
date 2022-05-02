#include<stdio.h>
int main()
{
	char ch;
	FILE *fp=fopen("append.txt","a");
	if(fp==0)
	{
		perror("file not opening\n");
		return -1;
	}
	while((ch=getchar())!=EOF)
		fputc(ch,fp);
	fclose(fp);
	return 0;
}
