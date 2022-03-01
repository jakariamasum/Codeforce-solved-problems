#include<iostream>
using namespace std;
int main()
{
    int a1,a2,a3,b1,b2,b3,n,sum1,sum2,x=0,y=0;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    
    sum1=(a1+a2+a3);
    sum2=(b1+b2+b3);
    if(sum1%5==0)
    x=sum1/5;
    else
    x=sum1/5+1;
    if(sum2%10==0)
    y=sum2/10;
    else
    y=sum2/10+1;
    if(x+y <=n)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
