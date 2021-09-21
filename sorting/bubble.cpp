#include<iostream>

using namespace std;
void sort(int a[],int n)
{
    for(int counter=1;counter<n;counter++)
    {
        for (int i=0;i<n-counter;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int a[n];
    cout<<endl<<"enter the values in array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    return 0;
}