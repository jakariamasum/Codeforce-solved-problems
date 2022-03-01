#include<stdio.h>
#include<string.h>
int main()
{
    int cnt=0;
    char a[10]="hello",b;
    while(scanf("%c",&b)&& b!='\n')
    {
        if(b==a[cnt])
        cnt++;
    }
    if(cnt==5)
    printf("YES\n");
    else
    printf("NO\n");
}
