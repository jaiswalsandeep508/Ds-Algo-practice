#include<iostream>

using namespace std;

int main()
{
    int n,a,b;

cout<<"Enter the value of n,a,b: ";
cin>>n>>a>>b;
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);

    cout<<endl<<"Numbers which is divisible by "<<a<<" & "<<b<<": "<<c1+c2-c3;

    return 0;
}