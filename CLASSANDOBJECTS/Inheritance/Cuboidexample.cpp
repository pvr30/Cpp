#include<iostream>
using namespace std;
class Rectangle
{
private:
     int length;
     int breadth;
public:
     void set_length(int l);
     void set_breadth(int b);
     int get_length();
     int get_breadth();
     Rectangle();
     Rectangle(int l,int b);
     int area();
     int parimeter();
};
class Cuboid : public Rectangle
{
private:
       int height;
public:
      Cuboid (int l=0,int b=0,int h=0)
      {
          height=h;
          set_length(l);
          set_breadth(b);
      }
      int volume()
      {
          return get_length()*get_breadth()*height;
      }
};
int main()
{
    Rectangle r1(5,10);
    cout<<r1.area()<<endl;
    cout<<r1.parimeter()<<endl;
    Cuboid c1(5,10,2);
    cout<<c1.area()<<endl;
    cout<<c1.parimeter()<<endl;
    cout<<c1.volume()<<endl; 
    return 0;
}
void Rectangle :: set_length(int l)
     {
         if(l>0)
           length=l;
        else  
           length=0;
     }
void Rectangle :: set_breadth(int b)
    {
         if(b>0)
           breadth=b;
        else  
           breadth=0;
     }
int Rectangle :: get_length()
{ return length; }
int Rectangle ::get_breadth()
{ return breadth; }
Rectangle :: Rectangle()
{
    length=0;
    breadth=0;
}
Rectangle :: Rectangle(int l,int b)
{
    set_length(l);
    set_breadth(b);
}
Rectangle :: Rectangle(Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
int Rectangle :: area(){return length*breadth;}
int Rectangle ::  parimeter(){ return 2*(length+breadth);}