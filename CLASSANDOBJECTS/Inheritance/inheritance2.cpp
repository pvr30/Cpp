#include<iostream>
using namespace std;
class Parent 
{
public:
    //int a;
    void show_parent(int a)
    {
        cout<<a<<endl;
    }
};
class Child : public Parent
{
 public:
    //  int x;
      void show_child(int x,int a)
      {
          cout<<x<<" "<<a<<endl;      }
};
int main()
{
    Parent p;
   // p.a=10;
    p.show_parent(10);
    Child c;
   // c.a=20;
   // c.x=30;
    c.show_child(30,20);
    c.show_parent(20);
    return 0;
}