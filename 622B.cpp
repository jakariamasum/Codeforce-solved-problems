#include <iostream>
 
using namespace std;
 
int main()
{ 
 char c;
 int h,m; cin>>h>>c>>m;
 int a; cin>>a;
 m += h*60;
 m+= a;
 m %= (24*60);
 h = m/60;
 m %= 60;
 cout<<h/10<<h%10<<":"<<m/10<<m%10;
 
}
