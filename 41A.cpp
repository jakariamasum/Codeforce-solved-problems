#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,l1,l2,cnt=0,j;
    char s[1000],s1[1000];
    scanf("%s",&s);
    scanf("%s",&s1);
    l1=strlen(s);
    l2=strlen(s1);
    for(i=0,j=l2-1;i<l1,j>=0;i++,j--)
        {
            if(s[i]==s1[j])
            cnt++;
        }
        if(cnt==l1)
        printf("YES\n");
        else
        printf("NO\n");
    
    
}
