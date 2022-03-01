#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,x,y;
    cin>>a>>b>>c>>d;
    x=max((3*a)/10,a-((a/250)*c));
    y=max((3*b)/10,b-((b/250)*d));
   // cout<<x<<endl<<y<<endl;
    if(x>y)
    cout<<"Misha"<<endl;
    else if(x<y)
    cout<<"Vasya"<<endl;
    else
    cout<<"Tie"<<endl;
}
