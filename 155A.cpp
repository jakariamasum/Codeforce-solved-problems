#include <stdio.h>
 int main(void)
 { 	
    int n,t,i,min,max,cnt=0,cnt1=0; 
    	scanf("%d",&n); 
    	int a[n]; 	
    for(i=1;i<=n;i++) 
    	scanf("%d",&a[i]);
     	max=a[1];
    min=a[1];
     	for(i=2;i<=n;i++) 
    	{ 		if(a[i]>max) 	
        	{max=a[i]; 	
            	cnt++; 		} 
        else if(a[i]<min)
         {min=a[i]; 
            cnt1++;} 	} 
    	printf("%d\n",cnt1+cnt);
     }
