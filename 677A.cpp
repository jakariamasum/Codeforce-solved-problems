#include<stdio.h>
int main()
{
    int n,h,i,sum=0,sum1=0;
    scanf("%d %d",&n,&h);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=h)
        sum1=sum1+1;
        else
        sum=sum+2;
    }
    printf("%d\n",sum+sum1);
}
