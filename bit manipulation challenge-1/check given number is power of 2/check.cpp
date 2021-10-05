#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter any intger for check is power of 2 using bit manipulation: ";
    cin>>n;

    cout<<endl<<"If number is power of two result is (1) or If number is not power of two result is (0) \n: "<<(n && !(n & n-1));

    return 0;
}