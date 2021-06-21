/* There are three ways to of inheritance
  1. publicly: All Members of parent have same accessibily in Child Class.
  2. protectedy: All Members Of Parent will become protected in Child class.
  3. privately :  All Members Of Parent will become private in Child class. */
#include<iostream>
using namespace std;
class Parent
{
private: int a;
protected: int b;
public: int c;
      void funParent()
      {a=10; b=20; c=30;}
};
class Child : private Parent
{
private:
protected:
public:
     void funChild()
     {
    //a=10; 
     b=30;
     c=90;
     }
};
class GrandChild : public Child
{
public :
      void funGrandChild()
      {
         // a=10;
        // b=20;
         //c=30;
      }
};
int main()
{
   // Child c;
   // c.a=10;
    //c.b=5;
    //c.c=90;
    return 0;
}