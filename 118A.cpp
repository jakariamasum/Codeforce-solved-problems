#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
    int i,l;
    char  s[100];
    scanf("%s",&s);
      l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='a'  || s[i]=='A' || s[i]=='e' ||  s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U'   || s[i]=='y' || s[i]=='Y')
        {continue;}
        
        else
        {
            printf(".");

            printf("%c",tolower(s[i]));
        }
    }
    s[i]='\0';
}
