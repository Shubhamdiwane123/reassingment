#include<stdio.h>
#include<string.h>
struct structure
{
	int integer;
	float decimal;
	char name[20];
};
union UNION
{
	int integer;
	float decimal;
	char name[20];
};
int main()
{
	struct structure s={11,12,"shubham"};
	union UNION u={11,12,"shubham"};

	printf("structure data:\n");
	printf("integer=%d decimal=%2f name:%s\n",s.integer,s.decimal,s.name);
	printf("structure size=%ld\n",sizeof(s));

	printf("union data:\n");
	printf("integer=%d decimal=%2f name=%s\n",u.integer,u.decimal,u.name);
	printf("union size=%ld\n",sizeof(u));
}
