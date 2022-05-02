#include<stdio.h>
int main(void)
{
   int x,count=32,j=0,ones=0,zeroes=0,n;
   printf("enter your number\n");
   scanf("%d",&x);
   n=x;
   while(!(x & 0x80000000))
   {
     x = x<<1;
     count--;
   }
   while(j<count)
   {
       if(x & 0x80000000)
               printf("1");
       else
               printf("0");
       x=x<<1;
       j++;
   }
   while(n)
   {
	   if(n&1)
		   ones++;
	   else
		   zeroes++;
	   n=n>>1;
   }
   printf("\nno of ones is =%d\n",ones);
   printf("no of zeroes is =%d\n",zeroes);

   return 0;
}
