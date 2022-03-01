#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

	while(t --)

	{
       long long int a,b,c,d;
		     cin >> a >> b >> c >> d;		
	       	if(b >= a)
         cout << b << endl;
	       	 else if(d < c)
         cout << b + c * ((a - b - 1) / (c - d) + 1) << endl;        
		      else
         cout << -1 << endl;

	} 

} 
 
