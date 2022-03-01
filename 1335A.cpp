#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double n;
        int x;
        cin>>n;
        x=ceil((n/2)-1);
        cout<<x<<endl;
    }
}
