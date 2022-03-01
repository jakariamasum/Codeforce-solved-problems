#include<stdio.h>
int main()
{
    int n,a,b,x,ans;
    scanf("%d %d %d",&n,&a,&b);
    x=n-a-1;
    if(x>b)
   { ans=b+1;}
    else{
    ans=x+1;}
    printf("%d\n",ans);
}
