#include<stdio.h>
#define fname(len,wid) len*wid
typedef struct rectangle
{
	unsigned int len;
	unsigned int wid;
	unsigned int area;
}rect;
void swap(rect *a)
{
	int temp;
	temp=a->len;
	a->len=a->wid;
	a->wid=temp;
}
int main()
{
	rect a={10,20};
	void(*fptr)(rect*);
	fptr=swap;
	fptr(&a);
	a.area=fname(a.wid,a.len);
	printf("area of rectangle:%d\n",a.area);
	return 0;
}
