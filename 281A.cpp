#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
    int i,l;
    char s[1000],s1[1000];
   scanf("%s",&s);
    l=strlen(s);
    for(i=0;i<l;i++)
        {
            if(i==0)
            {
               s1[i]=toupper(s[i]);
            }
            else
            s1[i]=s[i];
        }
    s1[i]='\0';
    
    printf("%s",s1);
}
