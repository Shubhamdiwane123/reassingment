#include"toggle.h"
int main()
{
	int n,pos;
	printf("enter your number \n");
	scanf("%d",&n);
	printf("enter the position which bit u want to toggle\n");
	scanf("%d",&pos);
	toggle(n,pos);
}
