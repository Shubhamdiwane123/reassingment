#include<stdio.h>
#include<string.h>
int ustrlen(const char *p);
char * ustrcat(char *dest,const char *source);
int main()
{
	char s1[20],s2[20],s3[50];
	puts("enter string s1");
	gets(s1);
	puts("enter string s2");
	gets(s2);

	int n=ustrlen(s1);
	printf("before concatination length of string s1 is =%d\n",n);

	ustrcat(s1,s2);
	printf("after the concatination s1 is s1=%s\n",s1);
	n=ustrlen(s1);
	printf("after concatination length of s1 is =%d\n",n);
}
int ustrlen(const char *p)
{
	unsigned int cnt=0;
	while(*p)
	{
		cnt++;
		p++;
	}
	return cnt;
}
char *ustrcat(char *dest,const char *source)
{
	int i,j,len=0;
	len=ustrlen(dest);
	for(i=len,j=0;source[j];i++,j++)
		dest[i]=source[j];
	dest[i]=0;
	return dest;
}
