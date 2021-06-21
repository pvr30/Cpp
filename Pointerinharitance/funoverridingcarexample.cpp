//Function Overriding  and Virtual Functions.
#include<iostream>
using namespace std;
class Basic_Car
{
public:
      virtual void start() //= 0;   //pure virtual functions
      {cout<<"Basic Car Is Started"<<endl;}
};
class Advance_Car : public Basic_Car
{
public:
       void start() {cout<<"Advance Car Is Started"<<endl;}
};
int main()
{
      Basic_Car *p=new Advance_Car;
      p->start(); 
  // Advance_Car *p=new Basic_Car;
    return 0;
}