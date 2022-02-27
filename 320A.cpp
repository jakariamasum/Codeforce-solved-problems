#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,cnt=0;
    char x[100000];
    scanf("%s",&x);
    l=strlen(x);
    for(i=0;i<l;)
    {
        if(x[i]=='1' && x[i+1]=='4' && x[i+2]=='4')
        i+=3;
    
    else if(x[i]=='1' && x[i+1]=='4')
        i+=2;
        else if(x[i]=='1')
        i++;
        else
       { cnt=-1;break;}}
    if(cnt==-1)
    printf("NO\n");
    else
    printf("YES\n");
}
