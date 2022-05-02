//CONSTANT TO POINTER
#include<stdio.h>
int main()
{
	int v1=10,v2=20;
	int  *const p=&v1;// p is constant to pointer 
	
	printf("%d\n",*p);
//	p=&v2;// not valid- because p is constant address is not change
	*p=v1+v2;// valid - *p is value is change
	printf("%d\n",*p);
}
// we know p-store address
// *p -getting value

