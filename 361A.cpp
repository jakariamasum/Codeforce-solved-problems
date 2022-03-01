#include<stdio.h>
int main()
    {
     int n,k,row,col;
     scanf("%d %d",&n,&k);
     for(row=1;row<=n;row++)
     { 
        for(col=1;col<=n;col++)
         { 
            if(row==col)  
            printf("%d ",k);
             else  
            printf("0 ");
            } 
       printf("\n");
        }}
