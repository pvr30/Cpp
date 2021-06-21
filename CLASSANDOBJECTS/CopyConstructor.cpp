// Copy Constructer
#include<iostream>
using namespace std;
class Circle
{
private:
      float radius;
public:
     Circle(float x)
    {
        radius=x;
    }  
    Circle (const Circle &rd)  //Copy Constructer
    {
        radius=rd.radius;
    }
    float area()
    {
        return radius*radius*3.14;
    }
};
int main()
{
    float r;
    cout<<"Enter Radius"<<endl;
    cin>>r;
    Circle r1(r);
    Circle r2=r1;
      cout<<"The Area Is "<<r2.area()<<endl;
    return 0;
}