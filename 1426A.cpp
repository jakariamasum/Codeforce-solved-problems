#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,x,cnt=1;
    cin>>n>>x;
    if(n>2)
    {
        n=n-2;
        cnt=cnt+(n/x);
        if(n%x!=0)
        cnt++;
    }
    cout<<cnt<<endl;}
}
