#include<iostream>
using namespace std;

int main() {
	int n,choice,result=0,result1=1;
	cin>>n>>choice;
	
	if(choice==1)
	{
	   for(int i=1;i<=n;i++) 
	    {
	        result=result+i;
	    }
	    cout<<result;
	}
	
	else if(choice==2)
	{
	   for(int i=1;i<=n;i++) 
	    {
	        result1=result1*i;
	    }
	    cout<<result1;
	}
	else {
        cout<<"-1";
    }
}
