#include<stdio.h>
int main()
{
   int  n,i,m;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
        if(n%10==0)
        n=n/10;
        else
        n=n-1;
    }
    printf("%d\n",n);
}
