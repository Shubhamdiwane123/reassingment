#include<stdio.h>
#include<stdlib.h>
FILE *my_fopen(const char *ptr,const char *mode)
{
	FILE *fp=fopen(ptr,mode);
	if(fp)
	{
		printf("file open successesfully\n");
		return(fp);
	}
	else
	{
		printf("file not open\n");
		exit(0);
	}
}
int main()
{
	int choice;
	char c;
	FILE *fp;
	while(1)
	{
		printf("\nenter your choice\n");
		printf("1.rmode\n 2.wmode\n 3.amode\n 4.r+mode\n 5.w+mode\n 6.a+mode\n 7.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: fp=my_fopen("file.txt","r");
				while((c=getc(fp))!=EOF)
					printf("%c",c);
				break;
			case 2: fp=my_fopen("file.txt","w");
				fputc('h',fp);
				fputc('e',fp);
				fputc('l',fp);
				fputc('l',fp);
				fputc('o',fp);
				break;
			case 3: fp=my_fopen("file.txt","a");
				fputc('h',fp);
				fputc('i',fp);
				break;
			case 4: fp=my_fopen("file.txt","r+");
				fputc('s',fp);
				fputc('o',fp);
				fputc('f',fp);
				fputc('t',fp);
				while((c=getc(fp))!=EOF)
					printf("%c",c);
				break;
			case 5: fp=my_fopen("file.txt","w+");
				fputc('h',fp);
				fputc('i',fp);
				while((c=getc(fp))!=EOF)
					printf("%c",c);
				break;
			case 6: fp=my_fopen("file.txt","a+");
				fputc('h',fp);
				fputc('i',fp);
				while((c=getc(fp))!=EOF)
					printf("%c",c);
				break;
			case 7: exit(0);
			default: printf("wrong input\n");
		}
	}
}

