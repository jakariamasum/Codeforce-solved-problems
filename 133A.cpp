#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char str[100];
    scanf("%s",&str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9')
        {printf("YES\n");
            return 0;;}
    }
    printf("NO\n");
    return 0;
}
