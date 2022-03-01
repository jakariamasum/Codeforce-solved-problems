#include<iostream>
using namespace std;
int main()
{
    int n,i,cnt=0,cnt1=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]-b[i]>0)
        cnt++;
        else if(a[i]-b[i]<0)
        cnt1++;
    }
    if(cnt==0)
    cout<<"-1"<<endl;
    else
    cout<<cnt1/cnt+1<<endl;
}
