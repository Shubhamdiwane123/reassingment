#include"clear.h"
int main()
{
	int n,pos;
	printf("enter the number\n");
	scanf("%d",&n);

	printf("enter the position which bit u want clear\n");
	scanf("%d",&pos);

	clear(n,pos);
}
