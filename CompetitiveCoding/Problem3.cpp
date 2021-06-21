#include <iostream>
#include <cstdio>
using namespace std;
void max_of_four(int a,int b,int c,int d)
{
   if(a>b &&  a>c && a>d)  
  { cout<<a<<endl; }
   else if(b>c && b>d)  
   { cout<<b<<endl;  }
   else if(c>d)   
   { cout<<c<<endl;  }
   else //if(d>a && d>b && d>c)    
  {  cout<<d<<endl;   } 
}
  int main() {
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   //int p=
   max_of_four(3,4,6,5);
  // cout<<p<<endl;
    return 0;
}