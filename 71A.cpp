#include<stdio.h>
#include<string.h>
int main(void)
{
   int i,l,n;
    char s[100];
    scanf("%d",&n);
   while(n--)
    {
        scanf("%s",&s);
        l=strlen(s);
        if(l>10)
        printf("%c%d%c\n",s[0],l-2,s[l-1]);
        else
        printf("%s\n",s);
    }
    return 0;
}
