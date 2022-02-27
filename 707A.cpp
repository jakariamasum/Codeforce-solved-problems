#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,cnt=0,n,m;
    scanf("%d %d",&n,&m);
    char s[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%s",&s[i][j]);
            if(s[i][j]=='C' || s[i][j]=='M' || s[i][j]=='Y')
            cnt++;
        }
    }
    if(cnt!=0)
    printf("#Color\n");
    else
    printf("#Black&White\n");
}
