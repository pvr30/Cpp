/*if we want to define a function or constructer outside class then we can use 
 scope resolation method 
 syntax: datatype classname :: functionname(parameters) */
#include<iostream>
using namespace std;
class Rectangle
{
private:
       int length;
       int breadth;
public:
       Rectangle();
       Rectangle(int x,int y);
       Rectangle(const Rectangle &c);
       void setdata(int l,int b);
       int  getdata();
       int  area();
       int parimeter();
};
Rectangle :: Rectangle()
{
    length=0;
    breadth=0;
}
Rectangle :: Rectangle(int x,int y)
{
    length=x;
    breadth=y;
}
Rectangle :: Rectangle(const Rectangle &c)
{
    length=c.length;
    breadth=c.breadth;
}
void Rectangle :: setdata(int l,int b)
{
    length=l;
    breadth=b;
}
int Rectangle ::  getdata()
{
    return length,breadth;
}
int Rectangle :: area()
{
    return length*breadth;
}
int Rectangle :: parimeter()
{
    return 2*(length+breadth);
}
int main()
{
    Rectangle r1;
    Rectangle r2(10,15);
    Rectangle r3=r2;
    cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;
    cout<<r3.parimeter()<<endl;   
    return 0;
}