#include<stdio.h>
int main()
{
    int n,m,x;

scanf("%d %d",&n,&m);

if(n==m)

{

x=((n*m)+n)/n;

}

else if(n<m)

{

x=(n*m)/m;

}

else

{

x=((n-1)/(m-1))+n;

}

printf("%d\n",x);


}
