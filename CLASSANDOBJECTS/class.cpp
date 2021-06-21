#include<iostream>
using namespace std;
class Rectangle     // Class
{
public:
       int length;
       int breadth;
     int area(int l,int b)
     {
         return l*b;
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
    Rectangle r;  //Object
    r.length=a;
    r.breadth=b;
    cout<<"The Area Of Rectangle is "<<r.area(a,b)<<endl;
    cout<<"The Parimeter Of Rectangle is "<<r.parimeter()<<endl;
    return 0;
}