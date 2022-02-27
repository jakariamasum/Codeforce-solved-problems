#include<stdio.h>
int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        if(a==b)
            printf("0\n");
        else if(a>b&&(a-b)%2==0 || a<b&&(b-a)%2!=0)
            printf("1\n");
        else
            printf("2\n");
    }}
