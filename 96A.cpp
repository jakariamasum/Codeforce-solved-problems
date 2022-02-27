#include<stdio.h>
#include<string.h>
int main()
{
 int i,l,x=0;
 char n[700];
 scanf("%s",&n);
 l=strlen(n);
 for (i=0;i<l-6;i++)
 {
  if (n[i]=='0' && n[i+1]=='0' && n[i+2]=='0' && n[i+3]=='0' && n[i+4]=='0' && n[i+5]=='0' && n[i+6]=='0')
  {
   x=7;
   break;
  }
  if (n[i]=='1' && n[i+1]=='1' && n[i+2]=='1' && n[i+3]=='1' && n[i+4]=='1' && n[i+5]=='1' && n[i+6]=='1')
  {
   x=7;
   break;
  }
 }
 if (x==7) printf("YES\n");
 else printf("NO\n");
 return 0;
}
