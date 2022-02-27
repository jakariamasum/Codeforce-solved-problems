#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(void)
{
    int i,l,x=0,y=0;
    char s[100],result[100];
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]>=65 && s[i]<=96)
        x++;
        if(s[i]>=97 && s[i]<=122)
        y++;
    }
    if(x>y)
    
    {
        for(i=0;i<l;i++)
        {result[i]=toupper(s[i]);
            printf("%c",result[i]);}
      
    }
     else if(x<y)
     {
        for(i=0;i<l;i++)
        {result[i]=tolower(s[i]);
            printf("%c",result[i]);}
    }
     else{
        for(i=0;i<l;i++)
    {result[i]=tolower(s[i]);
    printf("%c",result[i]);}}
    return 0;
}
