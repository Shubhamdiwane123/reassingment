#include <stdio.h>
#include <string.h>
 
void check(char [], int);
 
int main()
{
    char str[15];
 
    puts("enter the string\n");
    gets(str);
    check(str, 0);
 
    return 0;
}
 
void check(char str[], int index)
{
    int len = strlen(str) - (index + 1);
    if (str[index] == str[len])
    {
        if (index + 1 == len || index == len)
        {
            printf("string  is a palindrome\n");
            return;
        }
        check(str, index + 1);
    }
    else
    {
        printf("string is not a palindrome\n");
    }
}
