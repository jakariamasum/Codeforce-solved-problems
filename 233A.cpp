#include<stdio.h>
int main()

{

int n,i;

scanf("%d",&n);

if(n%2!=0)

{

printf("-1\n");

}

else

{

for(i=n;i>=1;i--)

{

printf("%d ",i);

}

printf("\n");

}
}
