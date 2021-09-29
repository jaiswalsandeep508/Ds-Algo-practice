#include<iostream>

using namespace std;

int main()
{
    int n;
    int pos;
    
    cout<<"Enter any integer: ";
    cin>>n;

    cout<<endl<<"Enter bit position for set bit(1): ";
    cin>>pos;

    cout<<endl<<"Integer after set bit: "<<( n | (1<<pos));

    return 0;
}