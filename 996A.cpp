#include <stdio.h>
int main() {
    int n,tk100,tk20,tk10,tk5,tk1;
    tk100=tk20=tk10=tk5=tk1=0;
scanf("%d", &n);
    tk100=n/100;
    n %= 100;
    tk20=n/20;
    n %= 20;
    tk10= n/10;
    n %= 10;
   tk5=n/5;
   n %= 5;
   tk1= n%5;
    printf("%d\n",tk100+tk20+tk10+tk5+tk1);

return 0; }
