#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter any intger for check number of set bit in binary form: ";
    cin>>n;

    int count=0;

    while(n)
    {
        n= n &(n-1);
        count++;
    }

    cout<<endl<<"Number of set bit: "<<count;

    return 0;
}