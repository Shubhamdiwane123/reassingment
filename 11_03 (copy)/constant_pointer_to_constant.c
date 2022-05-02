//CONSTANT POINTER TO CONSTANT
#include<stdio.h>
int main()
{
	int v1=10,v2=20;
	const int *const p=&v1;// p is constant pointer to constant

	printf("%d\n",*p);
//	p=&v2;// not valid -p is constant
//	*p=v1+v2;//not valid- *P is constant
	printf("%d\n",*p);
}
