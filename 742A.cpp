#include<stdio.h>
int main()
{
     long long int n;
     scanf("%lld",&n);
     if(n==0) 
        { printf("1\n");
        return 0;
         }
     if(n%4==0)
     printf("6\n");
     else if(n%4==1)
     printf("8\n");
     else if(n%4==2)
     printf("4\n");
     else if(n%4==3)
     printf("2\n");
    return 0;
    }
