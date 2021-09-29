#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str;
    cout<<"Enter any string: ";
    getline(cin,str);

    // uppercase
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]-=32;
        }
    }
    cout<<endl<<"Uppercase String: "<<str;

    // lowercase
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]+=32;
        }
    }
    cout<<endl<<"Lowercasecase String: "<<str;

    // or using transform function
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<endl<<"Uppercase string using transform functiion: "<<str;

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<endl<<"Lowercase string using transform functiion: "<<str;

    return 0;
}