#include<iostream>

using namespace std;

int main()
{
    int a,b;
    char op;

    cout<<"Enter first number:  "<<endl;
    cin>>a;

    cout<<"Enter second number:  "<<endl;
    cin>>b;

    cout<<"Enter operator:  "<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;
    
    default:
        cout<<"wrong input!";
        break;
    }

    return 0;
}