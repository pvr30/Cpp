//Private Data
#include<iostream>
using namespace std;
class Rectangle     
{
private:
       int length;
       int breadth;
public:
     Rectangle() //Non Parameterized Constructer or Defualt Constructer
     {
         length=5; 
         breadth=5;
     } 
     Rectangle(int l,int b) // Parameterized Constructer
     {
         setlength(l);
         setbreadth(b);
     } 
     void setlength(int l)
     {
         if(l>0)
           length=l;
         else
           cout<<"Enter Length Only In Positive Number "<<endl; 
     }
     void setbreadth(int b)
     {
         if(b>0)
           breadth=b;
         else
           cout<<"Enter Breadth Only In Positive Number "<<endl; 
     }
     int getlenght()
     {
         return length;
     }
     int getbreadth()
     {
         return breadth;
     }
     int area()
     {
         return length*breadth;
     }
     int parimeter()
     {
         return 2*(length+breadth);
     }
};
int main()
{
    float a,b;
    cout<<"Enter Length "<<endl;
    cin>>a;
    cout<<"Enter Breadth "<<endl;
    cin>>b;
    Rectangle r1;
    Rectangle r2(a,b);  
    cout<<"The Area Of Rectangle is "<<r1.area()<<endl;
    cout<<"The Parimeter Of Rectangle is "<<r2.parimeter()<<endl;
    return 0;
}