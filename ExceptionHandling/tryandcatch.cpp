#include<iostream>
using namespace std;
int main()
{
    int  a=10,b=0,c;
    try
    {
        if(b==0)
            throw 1;
        else
        c=a/b;
        cout<<c<<endl;
    }
    catch(int e)
    {
       cout<<"Can Not Divide By 0 "<<e<<endl;
    }
    cout<<"END"<<endl;
  return 0;
}