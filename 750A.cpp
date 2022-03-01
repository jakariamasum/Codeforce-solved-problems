#include<iostream>
using namespace std;
int main()
{
    int n,d,cnt=0,sum=0,i;
    cin>>n>>d;
    for(i=1;i<=n;i++)
   {
        sum=sum+i*5;
        if((240-sum-d)>=0)
        {
            cnt++;
        }
       
    }
    cout<<cnt<<endl;
}
