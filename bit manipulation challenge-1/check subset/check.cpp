#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements in set: ";
    cin>>n;

    cout<<endl<<"Enter elements in set: ";
    int arr[n],i,j;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<endl<<"Sunsets:  ";
    for(i=0;i<(1<<n);i++)
    {   cout<<"{";
        for(j=0;j<n;j++)
        {
            
            if( i & (1<<j))
            {
                cout<<" "<<arr[j]<<" ";
            }
           
        }
         cout<<"}";
        cout<<endl;
    }

   
    return 0;
}