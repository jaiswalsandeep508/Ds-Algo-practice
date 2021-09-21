#include<iostream>

using namespace std;

int insertion_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    return 0;
}
int main()
{
    int i,n;

    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<endl<<"Enter the values in Array: ";
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Sorted Array: ";
    insertion_sort(arr,n);
    
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

    }