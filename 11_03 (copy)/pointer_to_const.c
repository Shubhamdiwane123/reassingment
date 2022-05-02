//POINTER TO CONSTANT
#include<stdio.h>
int main()
{
	int v1=10,v2=20;
	const int *p=&v1;// p is a pointer to constant 
	p=&v2;// valid - address store in p is change.
	*p=v1+v2;// not valid because *p is constant  data is not change.

	printf("%d\n",*p);//20
	p=&v1;//valid - address is change
	printf("%d",*p);//10
}
