#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,j;
    char a[100],temp;
    gets(a);
    l=strlen(a);
    for(i=1;i<l;i++  )  {
       
        for(j=0;j<l-i;j+=2)
        
{

if(a[j]>a[j+2])

{

temp=a[j];

a[j]=a[j+2];

a[j+2]=temp;

}

}}
    printf("%s",a);


}
