#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,l,l1,l2,l3,l4,cnt=0;
    char s1[110],ans;
    cin>>s1;
    l1=strlen(s1)-2;
    char s2[110];
    cin>>s2;
    l2=strlen(s2)-2;
    char s3[110];
    cin>>s3;
    l3=strlen(s3)-2;
    char s4[110];
    cin>>s4;
    l4=strlen(s4)-2;
    if(l2/l1>=2 && l3/l1>=2 && l4/l1>=2)
    {
        cnt++;
        ans='A';
        
    }
    if(l1/l2>=2 && l3/l2>=2 && l4/l2>=2)
    {
        cnt++;
        ans='B';
        
    }
    if(l1/l3>=2 && l2/l3>=2 && l4/l3>=2)
    {
        cnt++;
        ans='C';
        
    }
    if(l1/l4>=2 && l2/l4>=2 && l3/l4>=2)
    {
        cnt++;
        ans='D';
        
    }
    if(l2*2<=l1&& l3*2<=l1 && l4*2<=l1)
    {
        cnt++;
        ans='A';
        
    }
    if(l1*2<=l2&& l3*2<=l2 && l4*2<=l2)
    {
        cnt++;
        ans='B';
        
    }
    if(l1*2<=l3&& l2*2<=l3 && l4*2<=l3)
    {
        cnt++;
        ans='C';
        
    }
    if(l1*2<=l4&& l2*2<=l4 && l3*2<=l4)
    {
        cnt++;
        ans='D';
        
    }
    if(cnt==1)
    cout<<ans<<endl;
    else
    cout<<"C"<<endl;
}
