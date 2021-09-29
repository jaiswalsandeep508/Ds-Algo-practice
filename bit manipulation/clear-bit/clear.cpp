#include<iostream>

using namespace std;

int main(){
    int n;
    int pos;
    
cout<<"Enter any integer: ";
cin>>n;
cout<<endl<<"Enter bit position for clear bit: ";
cin>>pos;

int mask = ~(1<<pos); 

cout<<endl<<"Integer after clear bit at position is: "<<(n & mask);

return 0;
}