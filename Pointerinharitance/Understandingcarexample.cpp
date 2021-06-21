// Parent Class Pointer Child Class Object.
#include<iostream>
using namespace std;
class Simple_Car
{
public:
       void start() {cout<<"Simple Car Is Started"<<endl;}
};
class Advance_Car : public Simple_Car
{
public:
       void start() {cout<<"Advance Car Is Started"<<endl;}
};
int main()
{
    Advance_Car a;
    a.start();
    Simple_Car *p=&a;
    p->start();
    return 0;
}