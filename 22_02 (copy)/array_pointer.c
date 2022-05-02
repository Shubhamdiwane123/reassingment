#include<stdio.h>
int main()
{
	char(*ptr)[5];
	char arr[5]={'a','e','i','o','u'};
	int i;

	ptr=&arr;
	for(i=0;i<5;i++)
		printf("%c ",(*ptr)[i]);
}
