#include<iostream>

using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{ 
    int a=2,b=4;
    int *aptr=&a;
    int *bptr=&b;
    swap(aptr,bptr);
    cout<<a<<" "<<b;

    return 0;
}