#include<iostream>
using namespace std;
class Shape
{
public: 
      virtual float  area() = 0;
      virtual float parimeter() = 0;
};
class Rectangle: public Shape
{
private:
     float length;
     float breadth;
public:
     Rectangle(float l=0,float b=0)
      {
          length=l;
          breadth=b;
      }    
      float  area()
      {
          return length*breadth;
      }
      float parimeter()
      {
          return 2*(length+breadth);
      }
};
class Circle : public Shape
{
private:
    float   radius;
public:
    Circle(float r) 
    {radius=r;}   
    float  area()
    {
       return 3.14*radius*radius;
    }
    float parimeter()
    {
        return 2*3.14*radius;
    }
};
int main()
{
    float l,b;
    float r;
    cout<<"Enter Length and Breadth Of Ractangle "<<endl;
    cin>>l>>b;
    cout<<"Enter Radius Of Circle"<<endl;
    cin>>r;
    Shape *s1;
    Shape  *s1=new Rectangle(l,b);
    cout<<"Area Of Ractangle = "<<s1->area()<<endl;
    cout<<"Parimeter Of Ractangle = "<<s1->parimeter()<<endl;
    s1=new Circle(r);
    cout<<"Area Of Circle = "<<s1->area()<<endl;
    cout<<"Parimeter Of Circle = "<<s1->parimeter()<<endl; 
    return 0;
}