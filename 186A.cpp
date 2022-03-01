#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,l1,cnt=0,j=0;
    char s[1000000],s1[1000000],x[5],y[5];
    scanf("%s",&s);
    scanf("%s",s1);
    l=strlen(s);
    l1=strlen(s1);
    if(l!=l1)
    {
        printf("NO\n");
        return 0;}
    else
    {
        for(i=0;i<l;i++)
        {
          if(s[i]!=s1[i]){
            cnt++;
            x[j]=s[i];
            y[j]=s1[i];
            j++;
            if(cnt>2){
            printf("NO\n");
            return 0;}
        }
            }
    }
    if(x[0]==y[1] && x[1]==y[0])
    printf("YES\n");
    else
    printf("NO\n");
}
