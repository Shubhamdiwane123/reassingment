#include<stdio.h>
int main()
{
	 int arr[5];
	arr[0]=10;
	arr[1]=20;
	arr[2]=30;
	arr[3]=40;
	int i,arr1[5]={11,22,33,44,55};

	printf("%d ,%d ,%d ,%d\n",arr[0],arr[1],arr[2],arr[3]); //10,20,30,40
	for(i=0;i<5;i++)
		printf("%d,",arr[i]); //10,20,30,40,garbage value
	printf("\n");

	for(i=0;i<5;i++)
		printf("%d,",arr1[i]); // 11,22,33,44,55,
	printf("\n");

	printf("addresses of arr1\n");

	for(i=0;i<5;i++)
		printf("address of arr1[%d] is =%p\n",i,&arr[i]);

}

