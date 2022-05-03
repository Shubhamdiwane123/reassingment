#include <stdio.h>
#define SIZE 50
void fun(int *p,int item,int pos,int size);
void delete(int *arr, int pos,int size);
int main() 
{
   int arr[SIZE];
    int i, item, pos, size;
    printf("enter the size of array\n");
    scanf("%d",&size);
 
    printf("Enter %d elements: ",size);
    for (i = 0; i < size; i++)
          scanf("%d",&arr[i]);
 
    printf("Array before insertion: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
       printf("Enter the element to be inserted: ");
    scanf("%d",&item);
    
    printf("Enter the position at which the element is to be inserted: ");
    scanf("%d",&pos);
    size++;
    fun(arr,item,pos,size);
    
    delete(arr,pos,size);
}
void fun(int *arr,int item,int pos,int size)
{    
   for (int i = size-1; i >= pos; i--)
	   arr[i] = arr[i - 1];
 
     arr[pos - 1] = item;
 
    printf("Array after insertion: ");
    
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void delete(int *arr, int pos,int size)
{
    int key;
 printf("Enter element to delete: ");
    scanf("%d",&key);
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            pos = i;
            break;
        }
    }
    if(pos != -1)
    {
        for(int i = pos; i < size - 1; i++)
            arr[i] = arr[i+1];
        printf("Array after deletion: ");
        for(int i = 0; i < size - 1; i++)
            printf("%d ",arr[i]);
    }
    else
        printf("Element Not Found\n");

}
