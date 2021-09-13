#include<iostream>
using namespace std;

bool check(int x,int y, int z)
{
    int a=max(x,max(y,z));
    int b,c;
   
   if(a==x)
   {
       b=y;
       c=z;
   }
   else if(a==y)
   {
       b=z;
       c=x;
   }
   else
   {
       b=x;
       c=y;
   }


   if(a*a==b*b+c*c)
   {
       return true;
   }
   else
   {
       return false;
   }
    
}
int main()
{
    int a,b,c;

    cout<<"Enter the value of a,b,c: ";
    cin>>a>>b>>c;

  if(check(a,b,c))
  {
      cout<<"pythagores triplet";
  }

  else{
      cout<<"not pythagores triplet";
  }
    return 0;
}