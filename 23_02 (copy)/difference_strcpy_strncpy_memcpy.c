#include<stdio.h>
#include<string.h>
#define SIZE 10
int main()
{
	char s1[SIZE]="qwer\0ty",str[SIZE],str1[SIZE],str2[SIZE];
	s1[7]='A';
	int i;

	puts(s1);
	strcpy(str2,s1);
	puts(str2);
	strncpy(str,s1,8);
	puts(str);
	memcpy(str1,s1,8);
	puts(str1);
	printf("strncpy string : ");

	for(i=0;i<8;i++)
		printf("%d=%c,",i,str[i]);
	printf("\n memcpy string: ");

	for(i=0;i<8;i++)
		printf("%d=%c,",i,str1[i]);
	printf("\nstrcpy string: ");
	for(i=0;i<8;i++)
		printf("%d=%c,",i,str2[i]);
	printf("\n");

}
