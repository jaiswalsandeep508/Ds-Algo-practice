#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact=1,i;
    for(i=2;i<=n;i++)
    {  
       fact*=i;
    }
    return fact;
}

int main(){
    int n,fact,ans,r;

    cout<<"Enter the value of 'n' and 'r' number: ";
    cin>>n>>r;
    cout<<endl;

  ans=factorial(n)/factorial(r)*factorial(n-r);
    
    cout<<ans;

    return 0;
}