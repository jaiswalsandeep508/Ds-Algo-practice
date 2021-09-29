#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str;

cout<<"Enter any string: ";
getline(cin,str);
    
    // Accending order
    sort(str.begin(),str.end());
    cout<<endl<<"Sorted string: "<<str;

    
    return 0;
}