#include<iostream>
using namespace std;
class Number
{
   int a,b;
public:
    Number(int x,int y)
    {
        a=x;
        b=y;
    }
    Number(const Number &c)
    {
        a=c.a;
        b=c.b;
    } 
  /*  void getdata(int x,int y)
    {
        a=x;
        b=y;
    } */
    void showdata()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
};
int main()
{ 
    int a,b;
    cout<<"Enter Two Numbers"<<endl;
    cin>>a>>b;
    Number r1(a,b);
//    r1.getdata(a,b);
    Number r2=r1;
    r2.showdata();
    return 0;
}