#include<stdio.h>
#include<string.h>
int main()
{
    int n, k, cnt=0;
    scanf("%d %d",&n,&k);
     char s[1000];
     while (n--)
     {
         int lucky=0,l,i;
        scanf("%s",&s); 
        l=strlen(s);
        for (i = 0; i < l; ++i)
         { 
            if (s[i] == '4' || s[i] == '7')
             {
                 lucky++; } }
         if (lucky <= k)
         { cnt++; } }
    printf("%d\n",cnt);
    return 0;}
