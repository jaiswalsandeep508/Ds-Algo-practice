#include<iostream>

using namespace std;

int main()
{
    int n,i,j;

    cout<<"enter any integer: ";
    cin>>n;
    cout<<endl;
    
   
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=n;j++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

return 0;

}