#include<stdio.h>
#define print(a) printf("%s\n",a);
void fun(char*a)
{
        int i,j,count;
        for(i=0;a[i];i++)
        {
                for(j=0;j<i;j++)
                {
                        if(a[j]==a[i])
                                break;
                }
                if(j==i)
                {
                        for(j=j+1,count=1;a[j];j++)
                        {
                                if(a[i]==a[j])
                                        count++;
                        }
                        printf("%c presect %d times\n",a[i],count);
                }
        }
}
int main()
{
        char a[20];
        printf("enter the string\n");
        scanf("%s",a);
        print(a);
        void (*fp)(char*a);
        fp=fun;
        fp(a);

}
