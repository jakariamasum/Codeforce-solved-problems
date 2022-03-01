#include<stdio.h>
int main()
{
    int n,i,cnt=0;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]!=a[i+1])
        cnt++;
    }
    printf("%d\n",cnt);
}
