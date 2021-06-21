//Function Overriding
#include<iostream>
using namespace std;
class Parent 
{
public: 
       void display() {cout<<"Parent"<<endl;}
};
class Child : public Parent
{
public: 
       void display() {cout<<"Child"<<endl;}
};
int main()
{
  /*  Child c;
    c.display();
    c.display();
    Parent p;
    p.display();*/
    Parent *p=new Child;
    p->display(); 
    p->display();
   /* Child *p=new Parent;
    p->display(); */
    return 0;
}