#include<iostream>
using namespace std;
class Myexception
{
   
};
int division(int x,int y)
{
    if(y==0)
        throw Myexception();
    else
      return x/y;
}
int main()
{
    int a=10,b=0,c;
     try
     {
         c=division(a,b);
         cout<<c<<endl;
     }
     catch(Myexception e)
     {
         cout<<"Can't divide by zero"<<endl;
     }
     cout<<"END"<<endl;
    return 0;
}
