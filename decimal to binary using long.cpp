#include<iostream>
using namespace std;

int main() {
    
	int n;
    long ans=0,pv=1;
	cin>>n;
	while(n>0)
	{
	    int rem=n%2;
	    n=n/2;
	    ans=ans+(rem*pv);
	    pv*=10;
	    
	}
	cout<<ans;
}
