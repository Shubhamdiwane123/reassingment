#include<stdio.h>
#include<pthread.h>
pthread_t tid[3];
pthread_mutex_t ab;
void *assending(void *a)
{
	pthread_mutex_lock(&ab);
	int *p=(int*)a;
	int i,j,key;
	printf("before sorting\n");
	for(i=0;i<5;i++)
		printf("%d\n",p[i]);
	printf("after sorting\n");
	for(i=1;i<5;i++)
	{
		key=p[i];
		j=i-1;
		while((j>=0)&&(p[j]>key))
		{
			p[j+1]=p[j];
			j=j-1;
		}
		p[j+1]=key;
	}
	for(i=0;i<5;i++)
		printf("%d\n",p[i]);
	pthread_mutex_unlock(&ab);
}
void *decending(void *a)
{
	pthread_mutex_lock(&ab);
	int i,j;
	int *p=(int*)a;
	printf("before sorting\n");
	for(i=0;i<5;i++)
		printf("%d\n",p[i]);
	printf("after sorting\n");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(p[i]<p[j])
				p[i]=p[i]^p[j]^(p[j]=p[i]);
		}
	}
		for(i=0;i<5;i++)
			printf("%d\n",p[i]);
		pthread_mutex_unlock(&ab);
}
int main()
{
	int a[5]={5,4,3,2,1};
	pthread_create(&tid[0],NULL,&assending,a);
	pthread_create(&tid[1],NULL,&decending,a);
	pthread_join(tid[0],NULL);
	pthread_join(tid[1],NULL);
}


