#include<iostream>
using namespace std;
int main()
{
    int n,a,b,x=0,cnt=0,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
  //  int a,b,x=0,cnt=0;
    
    cin>>a>>b;
    
        cnt=cnt+(b-a);
        if(cnt>x)
        x=cnt;}
    
    cout<<x<<endl;
}
