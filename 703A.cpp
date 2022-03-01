#include<stdio.h>
int main() 
{ 
    int n,a,b,cnt=0,cnt1=0,i;
     scanf("%d",&n); 
    for(i=0;i<n;i++)
        {
         scanf("%d %d",&a,&b);
         if(a>b)
            {
             cnt++; } 
        else if(a<b)
            {
             cnt1++; }
    }
         if(cnt>cnt1)
            { printf("Mishka\n"); }
         else if(cnt1>cnt)
            { printf("Chris\n"); }
         else printf("Friendship is magic!^^\n"); 
        return 0; 
        }
