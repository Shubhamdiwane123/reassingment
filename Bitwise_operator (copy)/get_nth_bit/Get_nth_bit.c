#include"Get.h"
int main()
{
	int num,n,bit;
	printf("enter the number:");
	scanf("%d",&num);

	printf("enter the nth bit to check(0-31):");
	scanf("%d",&n);
	check(num,n);

}
