#include<stdio.h>
int main()
{
	int ch,character=0,word=0,line=0;
	FILE *fp = fopen("count.txt","r");
	if(fp==0)
	{
		perror("file not opening\n");
		return -1;
	}
	while((ch=fgetc(fp))!=EOF)
	{
		character++;
		if(ch ==' ' || ch == '\n')
			word++;
		if(ch == '\n')
			line++;
	}
	fclose(fp);
	printf("no of character : %d\n",character);
	printf("no of words: %d\n",word);
	printf("no of lines : %d\n",line);
	return 0;
}
