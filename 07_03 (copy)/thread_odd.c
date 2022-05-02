#include<stdio.h>
#include<pthread.h>

pthread_t tid[2];
unsigned int shared_data=0;
pthread_mutex_t mutex;
unsigned int rc;
void* printeven(void*);
void* printodd(void*);
void main()
{
	pthread_create(&tid[0],0,&printeven,0);
	pthread_create(&tid[1],0,&printodd,0);
	sleep(3);
	pthread_join(tid[0],NULL);
	pthread_join(tid[1],NULL);
}
void *printeven(void *ptr)
{
	pthread_mutex_lock(&mutex);
	do
	{
		if(shared_data%2==0)
		{
			printf("even:%d\n",shared_data);
			shared_data++;
		}
		else
			rc=pthread_mutex_unlock(&mutex);//if number is odd ,do not print,release mutex
	}while(shared_data<=100);
}
void *printodd(void *ptr1)
{
	rc=pthread_mutex_lock(&mutex);
	do
	{
		if(shared_data%2!=0)
		{
			printf("odd:%d\n",shared_data);
			shared_data++;
		}
		else
			rc=pthread_mutex_unlock(&mutex);//if number is even,do  not print,release mutex
	}while(shared_data<=100);
}
