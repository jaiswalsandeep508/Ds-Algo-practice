#include<iostream>

using namespace std;

int main()
{
    int n,i,k,j;

    cout<<"enter any integer: ";
    cin>>n;
    cout<<endl;
    
   
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        k=i;
        for(;j<=n;j++)
        {
            cout<<k--;
        }
        k=2;
        for(;j<=n+i-1;j++)
        {
            cout<<k++;
        }

        cout<<endl;
    }

return 0;

}