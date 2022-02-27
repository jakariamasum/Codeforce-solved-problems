#include<stdio.h>
int main()
    { long long n;
     scanf("%lld",&n);
    int cnt = 0; 
    while (n != 0)
     { if (n % 10 == 4 || n % 10 == 7)
         { cnt++; }
         n /= 10; }
     if (cnt == 4 || cnt == 7)
    
     { printf("YES");}
    
     else { printf("NO"); }
     return 0;}
