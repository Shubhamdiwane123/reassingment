#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
void printlist(struct node*head)
{
	struct node*ptr=head;
	while(ptr)
	{
		printf("%d ->",ptr->data);
		ptr=ptr->next;
	}
	printf("NULL");
}
void push(struct node**head,int data)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=*head;
	*head=newnode;
}
void sortedinsert(struct node **head,struct node*newnode)
{
	struct node dummy;
	struct node *current =&dummy;
	dummy.next=*head;
	while(current ->next!=NULL && current->next->data <newnode->data)
		current = current->next;
	newnode->next=current->next;
	current->next = newnode;
	*head=dummy.next;
}
void insertsort(struct node **head)
{
	struct node*result = NULL;
	struct node *current =*head;;
	struct node *next;
	while(current!=NULL)
	{
		next=current->next;
		sortedinsert(&result,current);
		current = next;
	}
	*head=result;
}
int main(void)
{
	int keys[]={6,3,4,8,2,9};
	int n=sizeof(keys)/sizeof(keys[0]);
	struct node* head=NULL;
	for(int i=n-1;i>=0;i--)
		push(&head,keys[i]);
	insertsort(&head);
	printlist(head);
	return 0;
}

