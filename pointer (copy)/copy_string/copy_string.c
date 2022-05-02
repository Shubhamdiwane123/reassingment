#include"string_length.h"

int main()
{
        char str1[100],str2[100];
	char *s1,*s2;
	int len;
	printf("Enter a string: ");
	scanf("%s",str1);
	printf("After copy from string1 to string2:\n");
	for(int i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	printf("%s\n",str2);
	s1=str1;
	s2=str2;
	len=String_len(s2);
	printf("Length of string: %d\n",len);
	return 0;
}
