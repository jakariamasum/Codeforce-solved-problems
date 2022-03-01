#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    if(n%5==0)
    x=n/5;
    else
    x=(n/5)+1;
    printf("%d",x);
}
