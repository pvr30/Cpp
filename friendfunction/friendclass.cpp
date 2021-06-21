#include<iostream>
using namespace std;
class B;
class A 
{
private:
       int a=20;
public:
    friend class B ;   //friend class 
    void show(){cout<<a;} 
};
class B
{
public:
      void set(A r)
      {
         r.a=10;      
         cout<<r.a<<endl;
      }
};
int main()
{
  A o1;
  B o2;
  o2.set(o1);
  o1.show();
  return 0;
}