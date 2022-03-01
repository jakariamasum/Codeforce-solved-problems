#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j,sum=0,even=0,odd=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%2==1)
            {
                odd++;
            }
            else
            {
                even++;
            }
            sum=sum+a[i];
        }
        if(sum%2==1)
        printf("YES\n");
        else {
            if(even!=0 && odd!=0)
        printf("YES\n");
            else
            printf("NO\n");}
        
    }
}
