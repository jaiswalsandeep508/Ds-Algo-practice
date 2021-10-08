#include<iostream>

using namespace std;

int add(int n)
{
    if(n==0)
    {
        return 0;
    }

    int prevsum=add(n-1);

    return n+prevsum;

}

int main()
{
    int n;
    cout<<"Enter any integer: ";
    cin>>n;

    cout<<endl<<"Sum: "<<add(n);

return 0;
}