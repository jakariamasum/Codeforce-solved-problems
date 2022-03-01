#include<stdio.h>
int main()
{
    long long int b,n,w,sum=0,i;
    scanf("%lld %lld %lld",&b,&n,&w);
    for(i=1;i<=w;i++)
    {
        sum=sum+i*b;
    }
    if(sum>n){
    printf("%lld\n",sum-n);}
    else
    {printf("0\n");}
}
