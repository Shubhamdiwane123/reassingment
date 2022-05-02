#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};

struct node *create_list(struct node *start);
void display(struct node *start);
void count(struct node *start);
struct node *addatbeg(struct node *start,int data);
struct node *addatebd(struct node *start,int data);

int main()
{
	struct node *start=NULL;
	int data,item;
	start=create_list(start);
	display(start);
	count(start);
	return 0;
}
struct node *addatbeg(struct node *start,int data)
{
	struct node *temp;
	temp=(struct node*) malloc(sizeof(struct node));
	temp->info = data;
	temp->link = start;
	start = temp;//start pointer is for store base address or starting address of linklist
	return start;
}
struct node *addatend(struct node *start,int data)
{
	struct node *p,*temp;//pointer p is for store address of links
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;
	p=start;
	while(p->link!=NULL)
		p=p->link;
	p->link = temp;
	temp->link = NULL;
	return start;
}
struct node *create_list(struct node *start)
{
	int i,n,data;
	printf("enter the number of nodes:");
	scanf("%d",&n);
	start=NULL;
	if(n==0)
		return start;
	printf("enter the element to be inserted:");
	scanf("%d",&data);
	start=addatbeg(start,data);
	for(i=2;i<=n;i++)
	{
		printf("enter the element to be inserted:");
		scanf("%d",&data);
		start=addatend(start,data);
	}
	return start;
}
void display(struct node *start)
{
	struct node *p;
	if(start==NULL)
	{
		printf("list is empty\n");
		return;
	}
	p=start;
	printf("list is :\n");
	while(p!=NULL)
	{
		printf("%d ",p->info);
		p=p->link;
	}
	printf("\n\n");
}
void count(struct node *start)
{
	struct node *p;
	int cnt =0;
	p=start;
	while(p!=NULL)
	{
		p=p->link;
		cnt++;
	}
	printf("number of elements are %d\n",cnt);

}
