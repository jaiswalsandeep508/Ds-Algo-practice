#include<iostream>
#include<climits>

using namespace std;

int main()
{
    int n,i,array[n];
    int maxno=INT_MIN;
    int minno=INT_MAX;

    cout<<"Enter the value of 'n': ";
    cin>>n;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }

    for(i=0;i<n;i++)
    {
        
       maxno=max(maxno,array[i]);
       minno=min(minno,array[i]);
    }

    cout<<"Max Number: "<<maxno<<endl<<"Min Number: "<<minno;

    return 0;
}