#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	char name[20];
	int id;
	struct student *ptr;
};
int main()
{
	struct student *s,s_stack;
	s=(struct student *)malloc(sizeof(struct student));

	strcpy(s->name,"shubham");
	s->id=101;
	s->ptr=&s_stack;
	printf("name:%s\n rolno:%d\n",s->name,s->id);
}
