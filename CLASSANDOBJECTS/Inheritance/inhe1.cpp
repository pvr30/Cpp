#include<iostream>
using namespace std;
class Parent 
{
public:
     void display_parent()
     {
         cout<<"Parent"<<endl;
     }
};
class Child : public Parent
{
public:
      void display_child()
      {
          cout<<"Child"<<endl;
      }
};
int main()
{
    Parent p;
    p.display_parent();
    Child c;
    c.display_parent();
    c.display_child();
    return 0;
}