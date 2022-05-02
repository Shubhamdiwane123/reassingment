#include<stdio.h>
#define my_sizeof(type) (char*)(&type+1)-(char*)(&type)
int main()
{
	int x;
	char c;
	float f;
	double d;
	printf("addresss of x %p and address of x+1 %p\n",&x,&x+1);
	printf("size of int %ld\n",my_sizeof(x));
	printf("size of char %ld\n",my_sizeof(c));
	printf("size of float %ld\n",my_sizeof(f));
	printf("size of double %ld\n",my_sizeof(d));
}

