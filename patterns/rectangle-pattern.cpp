#include<iostream>

using namespace std;

int main()
{
    int row,col,i,j;

    cout<<"enter the row number: "<<endl;
    cin>>row;
    
    cout<<"enter the coloum number: "<<endl;
    cin>>col;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

return 0;

}