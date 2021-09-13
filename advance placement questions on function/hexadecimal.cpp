#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int htd(string n)
{
    int ans=0,x=1,s,i;

    s=n.size();

    for(i=s-1;i>=0;i--)
    {
        if(n[i]>='0' && n[i]<='9')
        {   
            ans=ans+(x*(n[i]-'0'));
        }
        else if(n[i]>='A' && n[i]<='F')
        {
            ans=ans+(x*(n[i]-'A'+10));
        }
        x=x*16;
    }

    return ans;

}
int main()
{
    string n;
    cout<<"Enter any hexadecimal number: ";
    cin>>n;

    cout<<htd(n);

    return 0;
}