// Abstract Class.
#include<iostream>
using namespace std;
class Parent 
{
public: 
     virtual void fun1()=0;   //THis is called as Abstract class.
     virtual void fun2()=0;
};
class Child : public Parent
{
public:
      void fun1() {cout<<"Function 1"<<endl;}
      void fun2() {cout<<"Function 2"<<endl;}
};
int main()
{
    Child c;
    c.fun1();
    c.fun2();
    return 0;
}