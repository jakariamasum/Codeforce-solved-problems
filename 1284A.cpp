#include <iostream>
#include<stdio.h>
 using namespace std; 
int main() { 
    int n,m,a,b,i,j,k;
    cin>>n>>m;
    string s[10000],s1[10000];
    for(i=1;i<=n;i++)
    {cin>>s[i];}
    for(i=1;i<=m;i++)
    {cin>>s1[i];}
    int q;
    cin>>q;
    int c[q];
    for(i=1;i<=q;i++)
    {
        cin>>c[i];
        if(c[i]%n==0 && c[i]%m==0)
        {a=n;
            b=m;}
        else if(c[i]%n==0 && c[i]%m!=0)
        {
        a=n;
            b=c[i]%m;}
        else if(c[i]%n!=0 && c[i]%m==0)
            {
        a=c[i]%n;
        b=m;}
        else if(c[i]%n!=0 && c[i]%m!=0)
            {
            a=c[i]%n;
        b=c[i]%m;}
        cout<<s[a]<<s1[b]<<endl;
    }
    	 	return 0; }
