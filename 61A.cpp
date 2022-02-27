#include<stdio.h>
#include<string.h>
int main(void)
{
   int i,l1;
    char s1[105],s2[105],s3[105];
    scanf("%s",&s1);
    scanf("%s",&s2);
    l1=strlen(s1);
    for(i=0;i<l1;i++){
        if(s1[i]=='1' && s2[i]=='0') 
        {
            s3[i]='1';
        }   
        else if(s1[i]=='1'  &&  s2[i]=='1')
        {
            s3[i]='0';
        }
        else if(s1[i]=='0' && s2[i]=='0')
       {
            s3[i]='0';}
        else if(s1[i]=='0' && s2[i]=='1')
        {
            s3[i]='1';
        }}
    s3[i]='\0';
    printf("%s\n",s3);
    return 0;
}
