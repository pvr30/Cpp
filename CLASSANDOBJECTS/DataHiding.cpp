//Private Data
#include<iostream>
using namespace std;
class Rectangle     
{
private:
       int length;
       int breadth;
public:
     void setlength(int l)   //Mutator
     {
         if(l>0)
           length=l;
         else
           cout<<"Enter Length Only In Positive Number "<<endl; 
     }
     void setbreadth(int b)  //Mutator
     {
         if(b>0)
           breadth=b;
         else
           cout<<"Enter Breadth Only In Positive Number "<<endl; 
     }
     int getlenght()  //Accsesor
     {
         return length;
     }
     int getbreadth() //Accsesor
     {
         return breadth;
     }
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
    Rectangle r;  
    r.setlength(a);
    r.setbreadth(b);
    cout<<"The Area Of Rectangle is "<<r.area(a,b)<<endl;
    cout<<"The Parimeter Of Rectangle is "<<r.parimeter()<<endl;
    cout<<r.getlenght()<<endl;
    return 0;
}