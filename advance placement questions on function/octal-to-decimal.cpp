#include<iostream>

using namespace std;

int otd(int n)
{
   int ans=0,y,x=1;

   while(n>0)
   {
        y=n%10;
        ans=ans+x*y  ;
        x=x*8;
        n=n/10;
   }
   return ans;
}

int main ()
{
  int n;
  cout<<"Enter any octal number: ";
  cin>>n;
  cout<<endl;
 cout<< otd(n); 

return 0;
}