#include<iostream>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	if (n%3==0){
		cout<<n-2<<" 1 1";
	}
	else {
		cout<<n-3<<" 2 1";
	}
}
