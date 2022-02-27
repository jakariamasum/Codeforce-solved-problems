#include<stdio.h>
int main(void)
{
    int n,x[100],y[100],z[100],a=0,b=0,c=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&x[i],&y[i],&z[i]);}
    
    for(i=0;i<n;i++)
    {
        a=a+x[i];
        b=b+y[i];
        c=c+z[i];
    }
    if(a==0 && b==0 && c==0)
    printf("YES\n");
    else
    printf("NO\n");
    return 0;
}
