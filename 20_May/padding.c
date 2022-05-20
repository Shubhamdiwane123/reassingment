#include <stdio.h>

#pragma pack(1)

struct student{    
	char a;	
	int b;
	char c;
};

int main()
{    
    struct student s;
    printf("size of structure: %ld\n",sizeof(struct student));  
    printf("Address of char a: %p\n",&s.a);
	printf("Address of int b: %p\n",&s.b);
	printf("Address of char c: %p\n",&s.c);
return 0;
}
