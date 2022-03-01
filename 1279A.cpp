#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+1)>=c && (b+c+1)>=a && (a+c+1)>=b)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
