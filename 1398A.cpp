#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]+a[i+1]<=a[n-1])
            {
            cout<<i+1<<' ' <<i+2<<' '<<n<<endl;
        break;}
            else
            {
                cout<<-1<<endl;
                break;
            }
        }
    }
}
