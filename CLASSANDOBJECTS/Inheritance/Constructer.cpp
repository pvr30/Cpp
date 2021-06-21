#include<iostream>
using namespace std;
class Parent
{
public:
      Parent() {cout<<"Parent "<<endl;}
      Parent(int x){cout<<x<<endl;}
};
class Child : public Parent
{
public: 
       Child(){cout<<"Child"<<endl;}
       Child(int y){cout<<y<<endl;}
       Child(int x,int a):Parent(x)
       {cout<<"Hello Child "<<a<<endl;}
};
int main()
{
    Parent p1;
    Parent p2(20);
    Child c1;  //in this object first execute Parent() then Child()
    Child c2(10);  // Same in this object first execute Parent() then Chile(int y)
    Child c3(25,45);
    return 0;
}