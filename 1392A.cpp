#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x=0,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {cin>>a[i];}
        int b=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]!=b)
            x=1;
        }
        if(x==0)
        cout<<n<<endl;
        else
        cout<<"1"<<endl;
    }
}
