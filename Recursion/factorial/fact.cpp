#include<iostream>

using namespace std;

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }

    int prevfact=fact(n-1);

    return n*prevfact;

}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    cout<<endl<<"fact of n: "<<fact(n);

return 0;
}