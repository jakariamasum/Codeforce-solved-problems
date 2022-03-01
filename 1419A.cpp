#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,l,cnt=0;
       
        scanf("%d",&n);
        char s[n];
        scanf("%s",&s);
        if(n%2==0)
        {
            for(i=1;i<n;i+=2)
            {
                if((s[i]-48)%2==0)
                cnt++;
            }        
                if(cnt!=0)
            printf("2\n");
            else
            printf("1\n");
            
        }
        else
        {
            for(i=0;i<n;i+=2)
            {
                if((s[i]-48)%2==1)
                
                {   cnt++;}
                }
                
                if(cnt!=0)
                printf("1\n");
                else
                printf("2\n");
            
        }
    }
    return 0;
    
}
