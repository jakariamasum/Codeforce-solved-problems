#include<stdio.h>
int main()
 { 
    int n; 
    char s[100];
     scanf("%d",&n);
     scanf("%s",&s);
    int i,sum1=0,sum2=0; 
    for(i=0;i<n;i++)
        { 
        if(s[i]!='4'&&s[i]!='7')
            {
             printf("NO\n"); 
            return 0; 
            }
         else
            { 
            if(i<n/2)
             sum1=sum1+s[i]-'0';
             else
             sum2=sum2+s[i]-'0';
             } 
        } 
    if(sum1==sum2) 
    printf("YES\n");
     else 
    printf("NO\n");
     return 0;
     }

 
