#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    long long  int a,b,k,i,sum=0,sum1=0;
    scanf("%lld %lld %lld",&a,&b,&k);
    for(i=1;i<=k;i+=2)
    {
        sum=sum+a;
    }
    for(i=2;i<=k;i+=2)
    {
        sum1=sum1+b;
    }
    printf("%lld\n",sum-sum1);
    }
}
