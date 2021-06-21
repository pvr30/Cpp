// Parent Class Pointer Child Class Object.
#include<iostream>
using namespace std;
class Parent
{
public:
      void fun1()
      {
          cout<<"Parent"<<endl;
      }
};
class Child : public Parent
{
public:
       void fun2()
       {
           cout<<"Child"<<endl;
       }
};
int main()
{
 /*Parent *p; = Parent *p=&r; 
   p = new Child;  = Child r;  Can  be Access . */
  /* Child *p; = Child *p=&r;
   p = new Parent;= Parent r; Can not be accsess */
   Child r;
   Parent *p=&r;
   p->fun1();
 //  p->fun2();
    return 0;
} 