#include<iostream> 
using namespace std;
int main()
{
    int n,d,sum=0,sum1=0,i;
    cin>>n>>d;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum1=sum1+a[i];
    }
    for(i=0;i<n-1;i++)
    {
        sum=sum+a[i];
    }
    int x=sum+((n-1)*10);
    if(x+a[n-1]<=d)
    {
        cout<<(d-sum1)/5<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}
