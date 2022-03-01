#include<stdio.h>
int main()
{
    int l,b,i,cnt=0;
    scanf("%d %d",&l,&b);
    while(l<=b)
    {
        cnt++;
        l=l*3;
        b=b*2;
    }
    printf("%d\n",cnt);
}
