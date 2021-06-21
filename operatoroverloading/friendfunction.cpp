/*Friend Function.:- Friend function can access all private,public and 
 protected menbers of the class. It it define outside the class */
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
  friend  Complex operator+ (Complex c1,Complex c2);
      void display()
      {
          cout<<"The Addition Is "<<real<<"+i"<<img<<endl;
      }
};
  Complex operator+ (Complex c1,Complex c2)
      {
          Complex temp;
          temp.real=c1.real+c2.real;
          temp.img=c1.img+c2.img;
          return temp;
      }
int main()
{
    int r1,i1;
    cout<<"Enter First Complex Number's Real Part And Imagnary Part Of The Complex Number"<<endl;
    cin>>r1>>i1;
    int r2,i2;
    cout<<"Enter Second Complex Number's Real Part And Imagnary Part Of The Complex Number"<<endl;
    cin>>r2>>i2;
    Complex c1(r1,i1),c2(r2,i2),c3;
    c3=c1+c2;   
    c3.display();
    return 0;
}