#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter any Integer: ";
    cin>>n;

    int i,j,prime[100]={0};
    
    for(i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(j=i*i;j<=n;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    cout<<endl<<"Prime Numbers Of "<<n<<" : ";

    for(i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}