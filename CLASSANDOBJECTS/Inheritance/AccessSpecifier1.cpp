#include<iostream>
using namespace std;
class demo
{
private:
    int a;
protected: 
    int b;
public:
    int c;
    void set()
    {a=0; b=0; c=0;}

 /*   void set(int x,int y,int z)
    {a=x; b=y; c=z;}
    void display()
    {
        cout<<a<<endl;
         cout<<b<<endl;
          cout<<c<<endl;
    } */
};
int main()
{
    demo d;
 //   d.set(10,20,30);
   // d.display();
     d.a=30;  //get error 
                    /* we can not access directly 
                  private and protected members of class */
     d.b=80; //get error
     d.c=90; //can be access.
   // cout<<c;
    return 0;
}