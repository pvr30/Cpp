#include<iostream>
using namespace std;
class Rational
{
private:
       int p;
       int q;
public:
 Rational()   
    {      
        p=1;       
        q=1;   
    } 
    Rational (int p,int q)
    {
       this->p=p;
       this->q=q;
    }
    Rational (Rational &r)
    {
        this->p=r.p;
        this->p=r.q;
    }
    int getP(){return p;}    
    int getQ(){return q;}    
 void setP(int p)   
  {        
      this->p=p;    
  }    
  void setQ(int q)   
   {       
        this->q=q;   
   } 
    Rational operator + ( Rational r)
    {
          Rational temp;
          temp.p=this->p*r.q+this->q*r.p;
          temp.q=this->q*r.q;
          return temp;
    }
    friend ostream & operator<<(ostream &out,Rational &r);
};
ostream & operator<<(ostream &out,Rational &r)
{
    out<<r.p<<"/"<<r.q<<endl;
    return out;
}
int main()
{
    Rational c1(3,4),c2(2,5),c3;
    c3=c1+c2;
     cout<<"Sum of "<<c1<<" and "<<c2<<" is "<<c3<<endl;    
   // cout<<c3;
    return 0;
}