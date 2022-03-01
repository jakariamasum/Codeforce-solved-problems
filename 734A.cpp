#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,cnt=0,cnt1=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",&s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
        cnt++;
        else
        cnt1++;
    }
    if(cnt>cnt1)
    printf("Anton\n");
    else if(cnt<cnt1)
    printf("Danik\n");
    else
    printf("Friendship\n");
}
