#include<stdio.h>
int main()
 {
     	int n,m,a,b,cnt=0; 
    	 scanf("%d %d",&n,&m);
    	for (b=0;b<=m;b++) 	
        { 		a=m-b*b; 
        		if(a*a+b==n&&a>=0)
         			cnt++; 	}
     	printf("%d\n",cnt);
    return 0; 
    }
