#include<iostream>

using namespace std;

int linearsearch(int arr[],int key,int n)
{
for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n,i,arr[n];
    int key;

    cout<<"Enter the value of 'n': ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the value of searching elemen: ";
    cin>>key;

    cout<<endl;
    cout<<linearsearch(arr,key,n);
    

    return 0;
}