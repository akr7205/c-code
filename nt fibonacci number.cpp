#include <iostream>  
using namespace std;  
int main()  
{  
    int a=0,b=1,k;
    int n;
    cin>>n;
for(int i=0;i<n;i++)
    {
    k=a+b;
    cout<<k;
    a=b;
    b=k;
    }
    cout<<a;
        
    
}  