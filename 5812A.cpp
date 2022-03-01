#include<stdio.h>
int main()
{
    int a,b,temp;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    b=(b-a)/2;
    printf("%d %d",a,b);
}
