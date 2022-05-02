#include<stdio.h>
#include<stdlib.h>
struct class
{
	int no;
	int roll_no;
	char name[20];
	char grade;
	int marks;
};
int main()
{
	struct class *ptr;
	int i;
	ptr=(struct class*) malloc(5*sizeof(struct class));

	if(ptr==NULL)
		printf("memory not allocated\n");
	for(i=0;i<5;i++)
	{
		printf("enter the 1.no 2.roll_no 3.name 4.grade 5.marks\n");
		scanf("%d %d %s %c %d",&(ptr+i)->no,&(ptr+i)->roll_no,(ptr+i)->name,&(ptr+i)->grade,&(ptr+i)->marks);
	}
	printf("dispaly:\n");
        for(i=0;i<5;i++)
		printf("%d  %d  %s  %c   %d\n",(ptr+i)->no,(ptr+i)->roll_no,(ptr+i)->name,(ptr+i)->grade,(ptr+i)->marks);
	free(ptr);
}
