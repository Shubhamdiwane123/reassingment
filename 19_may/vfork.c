#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	vfork();
	vfork();
	vfork();
	printf("hello shubham PID =%d\n",getpid());
	return 0;
}
