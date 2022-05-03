#include <stdio.h>
#define SIZE 100
  
 int count(int *a,int *b,int n)
{ 
    int i,c,j;
    for(i=0; i<n; i++)
    {
        c=1;
        if(a[i]!=-1)
        {
            for(j=i+1; j<n; j++)
      
            {
               if(a[i]==a[j])
                {
                   c++;
                   a[j]=-1;
               }
           }
           b[i]=c;
        }
          
    
           
    }
      
 }
  
 void print(int *a,int *b,int n)
 { 
    int i;
    for(i=0; i<n; i++)
    {
          
        if(a[i]!=-1)
        {
            printf("no of %d is %d \n",a[i],b[i]);
  
        } 
          
    }
     
 }
int main()
{
    int a[SIZE],b[SIZE],i,n;
    
    printf("Enter size of the array : ");
    scanf("%d", &n);
  
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     
    count(a,b,n);
     
    print(a,b,n); 
}
