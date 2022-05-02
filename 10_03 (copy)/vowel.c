#include<stdio.h>
#include<string.h>
char *vowel(char *str1,char *str2);
int main()
{
	char s1[50],s2[50],temp[20];

	puts("enter the string s1");
	gets(s1);
	puts("enter the string s2");
	gets(s2);
	vowel(s1,s2);
}
char *vowel(char *str1,char *str2)
{
	int i,j=0,k=0,r;
	char temp1[10],temp2[10],temp3[10],ch;
	for(i=0;str1[i];i++)
	{
		if((str1[i]=='A')||(str1[i]=='E')||(str1[i]=='I')||(str1[i]=='O')||(str1[i]=='U')||(str1[i]=='a')||(str1[i]=='e')||(str1[i]=='i')||(str1[i]=='o')||(str1[i]=='u'))
			temp1[j++]=str1[i];
	}
	printf("the vowels in 1st string\n");
	puts(temp1);
	j=0;
	  for(i=0;str2[i];i++)
        {
                if((str2[i]=='A')||(str2[i]=='E')||(str2[i]=='I')||(str2[i]=='O')||(str2[i]=='U')||(str2[i]=='a')||(str2[i]=='e')||(str2[i]=='i')||(str2[i]=='o')||(str2[i]=='u'))
                        temp2[j++]=str2[i];
        }
	  printf("the vowels in 2nd string\n");
	  puts(temp2);

	  for(i=0;temp1[i];i++)
	  {
		  int cnt=0;
		  for(j=0;temp2[j];j++)
		  {
			  if(temp1[i]==temp2[j])
			  {
				  ch=temp1[i];
			  for(k=0;temp3[k];k++)
				  if(ch==temp3[k])
					  cnt++;
			  if(cnt==0)
				  temp3[k++]=ch;
			  }

		  }
	  }
	  printf("the repeated element in those string\n");
	  puts(temp3);

}
