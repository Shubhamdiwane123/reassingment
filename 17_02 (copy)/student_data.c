#include<stdio.h>

typedef struct student
{
	char name[15],branch[10];
	float cgpa;
}stu;
int stu_count(int n)
{
	printf("enter required number of student details\n");
	scanf("%d",&n);
	return n;
}
void stu_details(stu data[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter the student name\n");
		scanf("%s",data[i].name);
		printf("enter the branch \n");
		scanf("%s",data[i].branch);
		printf("enter the cgpa\n");
		scanf("%f",&data[i].cgpa);
	}
	return;
}
void display(stu data[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("student details\n");
		printf("name: %s\n",data[i].name);
		printf("branch: %s\n",data[i].branch);
		printf("cgpa:%f\n",data[i].cgpa);
	}
	return ;
}
int main()
{
	int n;
	n=stu_count(n);
	stu data[n];
	stu_details(data,n);
	display(data,n);
	return 0;
}
