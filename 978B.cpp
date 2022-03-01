#include<iostream>
using namespace std;
int main()
{
    int n,i,cnt=0;
    cin>>n;
    char s[n];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<n;i++)
    {
        if(i+2<=n-1)
        {
            if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x')
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
