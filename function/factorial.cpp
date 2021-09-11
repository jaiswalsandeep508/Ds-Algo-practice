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
    int n,fact,ans;

    cout<<"Enter any number: ";
    cin>>n;
    cout<<endl;

  ans=factorial(n);
    
    cout<<ans;

    return 0;
}