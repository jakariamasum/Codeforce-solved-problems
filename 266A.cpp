#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,l,count=0,n;
    char s[100];
    scanf("%d",&n);
    scanf("%s",&s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]==s[i+1])
        {count++;}
    }
    printf("%d\n",count);
    return 0;
}
