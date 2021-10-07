#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter any Integer: ";
    cin>>n;

    int i,j,spf[100]={0};
    
    for(i=2;i<=n;i++)
    {
        spf[i]=i;
    }
    for(i=2;i<=n;i++)
    {
        if(spf[i]==i)
        {
            for(j=i*i;j<=n;j+=i)
            {
                if(spf[j]==j)
                {
                spf[j]=i;
                }
            }
        }
    }

    cout<<endl<<"Prime factor of "<<n<<": ";
    while(n!=1)
    {
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
   
    return 0;
}