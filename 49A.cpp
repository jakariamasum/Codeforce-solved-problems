#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,cnt=0;
    char s[100];
    gets(s);
    l=strlen(s);
    if(s[l-2]==' ')
    {
        while(s[l-2]==' ')
        {l--;
            ;}cnt++;
       {if(s[l-cnt-1]=='A' || s[l-cnt-1]=='E' ||s[l-cnt-1]=='I' ||s[l-cnt-1]=='O' ||s[l-cnt-1]=='U' || s[l-cnt-1]=='Y' || s[l-cnt-1]=='a' || s[l-cnt-1]=='e' ||s[l-cnt-1]=='i' ||s[l-cnt-1]=='o' ||s[l-cnt-1]=='u' || s[l-cnt-1]=='y')
        printf("YES\n");
        else 
        printf("NO\n");
       return 0; }}
   if(s[l-2]=='A' || s[l-2]=='E' ||s[l-2]=='I' ||s[l-2]=='O' ||s[l-2]=='U' || s[l-2]=='Y' || s[l-2]=='a' || s[l-2]=='e' ||s[l-2]=='i' ||s[l-2]=='o' ||s[l-2]=='u' || s[l-2]=='y')

    printf("YES\n"); 
    else
    printf("NO\n");       
    return 0;}
