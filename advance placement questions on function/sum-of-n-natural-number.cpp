#include<iostream>

using namespace std;

// sum of n natural number by using formula
/*int sum(int a)
{
    int sum1=0;
    sum1= (a)*(a+1)/2;
   return sum1;

}*/

// sum of n natural number using for loop
int sum(int a)
{
    int i,ans=0;
    for(i=1;i<=a;i++)
    {
        ans+=i;
    }
    return ans;
}
int main()
{
    int n,ans;

    cout<<"Enter the value of 'n': ";
    cin>>n;

   ans= sum(n);
    cout<<endl<<ans;
    return 0;
}