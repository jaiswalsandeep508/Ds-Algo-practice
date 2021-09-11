#include<iostream>
#include<cmath>
using namespace std;

int fibo(int n)
{
    int t1=0,t2=1,nextterm,i;
    for(i=1;i<=n;i++)
    {   cout<<t1<<endl;
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
    return 0;
}

int main(){
    int n;

    cout<<"Enter any number: "<<endl;
    cin>>n;

    fibo(n);

    return 0;
}