#include<iostream>

using namespace std;

int btd(int n)
{
   int ans=0,y,x=1;

   while(n>0)
   {
        y=n%10;
        ans=ans+x*y  ;
        x=x*2;
        n=n/10;
   }
   return ans;
}

int main ()
{
  int n;
  cout<<"Enter any binary number: ";
  cin>>n;
  cout<<endl;
 cout<< btd(n); 

return 0;
}