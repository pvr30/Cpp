//Operator Overloading.
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
      Complex operator+ (Complex &x)
      {
          Complex temp;
          temp.real=real+x.real;
          temp.img=img+x.img;
          return temp;
      }
      void display()
      {
          cout<<"The Addition Is "<<real<<"+i"<<img<<endl;
      }
};
int main()
{
    int r1,i1;
    cout<<"Enter First Complex Number's Real Part And Imagnary Part Of The Complex Number"<<endl;
    cin>>r1>>i1;
    int r2,i2;
    cout<<"Enter Second Complex Number's Real Part And Imagnary Part Of The Complex Number"<<endl;
    cin>>r2>>i2;
    Complex c1(r1,i1),c2(r2,i2),c3;
    c3=c1+c2;   /*here we can say that c2 is pass as an argunment and + operator is add it 
                      into c1 and the complete addition is add in c3. */ 
  //  c3=c1.operator+(c2);
    c3.display();
    return 0;
}