#include<iostream>
using namespace std;
class Parent
{
private:
    int a;
protected: 
    int b;
public:
    int c;
    void set()
    {a=0; b=10; c=20;}
};
class Child : public Parent
{
public:
     void set_through_child()
     { b=10 ; c=20;} /* We can accsess only protected and public
                     members of the parent class we can not access private
                     members of the class*/
     
};
int main()
{
    Child c;
    //c.a=10;
    //c.b=20;     
    //c.c=30;
    return 0;
}