// Friend Function
#include<iostream>
using namespace std;
class demo
{
private: int a;
protected : int b;
public : int c;
 friend void fun();  //-> friend function
 void display() {cout<<a<<" "<<b<<" "<<c<<" "<<endl;}
};
void fun()
{
    demo d;
    d.a=10;
    d.b=20;
    d.c=30;
    d.display(); 
}
int main()
{
    fun();
    return 0;
}