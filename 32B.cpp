#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,l;
    char s[200];
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='.')
        {printf("0");}
        if(s[i]=='-' && s[i+1]=='.')
        {printf("1");i++;}
        if(s[i]=='-' && s[i+1]=='-')
        {printf("2");i++;}
    }
    return 0;
}
