#include<stdio.h>
int main(void)
{
    int n,p[100],i;
   long double result,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {scanf("%d",&p[i]);
        sum=sum+p[i];
        result=(sum/n);}
        printf("%Lf",result);
        return  0;    
    
}
