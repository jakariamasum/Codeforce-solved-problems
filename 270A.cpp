#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if((360%(180-n)==0))
        printf("YES\n");
        else
        printf("NO\n");
    }
}
