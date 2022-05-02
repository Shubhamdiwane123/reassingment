#include<stdio.h>
#include<stdlib.h>
struct node
{
	int num;
	struct node*nextptr;
}*stnode;
struct node*tail,*p,*q,*store;
void listcreation(int n);
void listdeletelastnode();
void displaylist(int a);
int main()
{
	int n,num1,a,pos;
	stnode =NULL;
	printf("\n circular linked list : delete node at the end of a circular linked list.\n");

	printf("input the number of nodes:");
	scanf("%d",&n);
	listcreation(n);
	a=1;
	displaylist(a);
	listdeletelastnode();
	a=2;
	displaylist(a);
	return 0;
}
void listcreation (int n)
{
	int i,num;
	struct node *preptr,*newnode;

	if(n>=1)
	{
		stnode=(struct node*)malloc(sizeof(struct node));

		printf("input data for node1:");
		scanf("%d",&num);
		stnode->num=num;
		stnode->nextptr=NULL;
		preptr=stnode;
		for(i=2;i<=n;i++)
		{
			newnode=(struct node*)malloc(sizeof(struct node));
			printf("input data for node %d:",i);
			scanf("%d",&num);
			newnode->num=num;
			newnode->nextptr=NULL;
			preptr->nextptr=newnode;
			preptr=newnode;
		}
		preptr->nextptr=stnode;
	}
}
void listdeletelastnode()
{
	p=stnode;
	while(p->nextptr!=stnode)
	{
		q=p;
		p=p->nextptr;
	}
	q->nextptr=stnode;
	printf("\n the deleted node is; %d",p->num);
	free(p);
}
void displaylist(int m)
{
	struct node *tmp;
	int n=1;
	if(stnode==NULL)
	{
		printf("no data found in the list yet.");
	}
	else
	{
		tmp=stnode;
		if(m==1)
			printf("\n data entered in the list are:\n");
		else
			printf("\n after deletion the new list are:\n");
		do{
			printf("data %d=%d\n",n,tmp->num);
			tmp=tmp->nextptr;
			n++;
		}while(tmp!=stnode);
	}
}


