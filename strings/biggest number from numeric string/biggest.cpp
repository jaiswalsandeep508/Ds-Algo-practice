#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    string str;
    cout<<endl<<"Enter any numeric string: ";
    getline(cin,str);

    sort(str.begin(), str.end(), greater<int>());
    cout<<"Greatest integer: "<<str;

    return 0;
}