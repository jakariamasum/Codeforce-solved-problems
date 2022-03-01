#include<iostream>
using namespace std;
int main()
{
     int t;
    cin>>t;
    while(t--)
    {
      long long  int n,k,cnt=0;
        cin>>n>>k;
        while(n!=0)
        {
       //  if(n%k==0)
            cnt=cnt+(n%k)+1;
                n=n/k;
            /*else  {
            n=n-(n%k);
                cnt=n%k;}*/
            }
        
        cout<<cnt-1<<endl;
    }
}
