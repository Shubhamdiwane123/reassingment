#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void push(struct node ** head_ref,int new_data)
{
	struct node *new_node=(struct node*)malloc(sizeof(struct node));

	new_node->data=new_data;
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}
int detectloop(struct node *list)
{
	struct node *slow_p=list,*fast_p=list;

	while(slow_p && fast_p && fast_p->next)
	{
		slow_p=slow_p->next;
		fast_p=fast_p->next->next;
		if(slow_p==fast_p)
			return 1;
	}
	return 0;
}
int main()
{
	struct node *head=NULL;
	push(&head,'A');
	push(&head,'B');
	push(&head,'C');
	push(&head,'D');
	push(&head,'E');
	push(&head,'F');
	push(&head,'B');

	head->next->next->next=head;
	if(detectloop(head))
		printf("loop found");
	else
		printf("no loop");
	return 0;
}
