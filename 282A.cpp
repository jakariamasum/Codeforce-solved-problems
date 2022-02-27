#include<stdio.h>
#include<string.h>
int  main(void)
{
    int i,l,n,x=0;
    char s[100];
    scanf("%d",&n);
    while(n--)
    {
       scanf("%s",&s);
        l=strlen(s);
        if(s[i]=='+' || s[i+2]=='+')
        x=x+1;
        else if(s[i]=='-' || s[i+2]=='-')
        x=x-1;
    }
    printf("%d\n",x);
    return 0;
}
