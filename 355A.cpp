#include <stdio.h>
 int main()
    {
     int k, d,i; 
    scanf("%d %d", &k, &d); 
    if(k == 0 || (d == 0 && k > 1))
        {printf("No solution");}
     else{printf("%c", '0'+ d);
         for(i= 1; i < k; i++)
            {printf("0");}
        printf("\n");}
     return 0;
    }
