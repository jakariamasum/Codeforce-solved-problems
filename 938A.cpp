#include<iostream>
using namespace std;
int main()
{
    int i,l,n;
    char s[10000];
    cin>>n;
    cin>>s;
    for(i=0;i<n;)
    {
       cout<<s[i];
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
        {
            while(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')

            {i++;
            }        }
        else
        i++;
        //cout<<s[i];
    }
  
}
