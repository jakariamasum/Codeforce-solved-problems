#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,a[5][5],x,y,ans;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]==1)
           { x=i+1;
            y=j+1;}
        }
    }
    ans=abs(x-3)+abs(y-3);
    printf("%d\n",ans);
}
