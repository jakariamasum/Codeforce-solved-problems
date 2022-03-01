#include<iostream>
using namespace std;
int main()
{
    int n,i,a=0,b=0,c=0,d=0,e=0;
    string s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        if(s[0]=='T')
        a++;
        else if(s[0]=='C')
        b++;
        else if(s[0]=='O')
        c++;
        else if(s[0]=='D')
        d++;
        else if(s[0]=='I')
        e++;
    }
    cout<<(a*4)+(b*6)+(c*8)+(d*12)+(e*20)<<endl;
}
