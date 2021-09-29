#include<iostream>

using namespace std;

int main(){
    int n;
    int pos;
cout<<"Enter any integer: ";
cin>>n;
cout<<endl<<"Enter bit position: ";
cin>>pos;
cout<<endl<<"Bit at this position is: "<<((n&(1<<pos))!=0);

return 0;
}