#include<stdio.h>
int main(void)
{
    int y,a,b,c,d;
    scanf("%d",&y);
    while(y>0)
    {
        y++;
        a=y/1000;
        b=(y%1000)/100;
        c=((y%1000)%100)/10;
        d=((y%1000)%100)%10;
        if(a!=b && a!=c && a!=d && d!=b && d!=c && b!=c)
        break;
    }
    printf("%d\n",y);
    return 0;
}
