#include<iostream>
using namespace std;

int main() {
    int result=0,k=1,n,i=0;
    cin>>n;
    while(i!=n)
    {
        result=3*k+2;
         k++;
        if(result%4==0)
        {
            continue;
        }
        cout<<result<<' ';
       i++;
    }
	// Write your code here
	
}
