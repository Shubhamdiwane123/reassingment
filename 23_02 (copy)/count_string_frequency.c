#include<stdio.h>
#include<string.h>
#define SIZE 50
char *my_strchr(char *s,int ch);
int main()
{
	char s[SIZE],ch,*p;
	char *(*fptr)(char *,int)= my_strchr;
	printf("enter the string:");
	gets(s);

	printf("enter the character do you want to find frequency:");
	scanf("%c",&ch);

	fptr(s,ch);
}
char *my_strchr(char *s,int ch)
{
	int i,cnt=0;
	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
			cnt++;
	}
	 if(cnt>0)
                printf("the frequency of character is %d\n",cnt);
        else
                printf("the frequency is %d",0);
}

