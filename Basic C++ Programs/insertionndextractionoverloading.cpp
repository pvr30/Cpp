// Overloading Of Operator << (Insertion) and operator >>(Extraction)
#include<iostream>
using namespace std;
class Complex
{
private:
     int real;
     int img;
public:
    Complex(int r=0,int i=0)
      {
          real=r;
          img=i;
      }
     friend ostream & operator<<(ostream &out,const Complex &c);
     friend istream & operator>>(istream &in,Complex &c);
};
ostream  & operator<<(ostream &out,const Complex &c)
{
    out<<c.real<<"+i"<<c.img;
    return out;
}
istream  & operator>>(istream &in,Complex &c)
{
   cout<<"Enter Real Part "<<endl;
   in>>c.real;
   cout<<"Enter Imagnary Part "<<endl;
   in>>c.img;
   return in;
}
int main()
{
    Complex c1;
    cin>>c1;
    cout<<"The Complex Number = ";
    cout<<c1;
    return 0;
}
