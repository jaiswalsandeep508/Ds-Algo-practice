#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,sum=0,lastdigit;
    cout<<"Enter any integer: ";
    cin>>n;
    int orignal=n;

    while(n>0)
    {
        lastdigit=n%10;
       sum=sum+pow(lastdigit,3);
        n=n/10;
    }
    if(sum==orignal)
    {
        cout<<"Amstrong Number!";
    }
    else{
        cout<<"Not Armstrong!";
    }
    return 0;
}