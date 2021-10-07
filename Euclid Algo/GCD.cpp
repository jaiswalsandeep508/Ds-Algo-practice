#include<iostream>

using namespace std;

int main()
{
    int a,b,rem;

cout<<"Enter the value of a,b: ";
cin>>a>>b;
    while(b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }

    cout<<endl<<"Greatest common divisor is: "<<a;
    return 0;
}