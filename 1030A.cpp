#include<stdio.h>
int main()
{
    int n,i,cnt=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(x[i]==0)
        cnt++;
    }
    if(cnt==n)
    printf("EASY\n");
    else
    printf("HARD\n");
}
