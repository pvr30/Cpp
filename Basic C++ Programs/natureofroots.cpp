#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int a,b,c,d;
  float r1,r2;
  cout<<"Enter a,b and c"<<endl;
  cin>>a>>b>>c;
  d=b*b-4*a*c;
    if(d==0)
    {
        cout<<"Roots Are Real And Equal"<<endl;
    }
    else if(d>0)
        1
    {
        cout<<"Roots Are Real and Not Equal"<<endl;
    }
    else if(d<0)
    {
        cout<<"Roots Are Imaginary"<<endl;
    }
    r1=-b+sqrt(d)/(2*a);
    r2=-b-sqrt(d)/(2*a);
    cout<<r1<<" "<<r2<<endl;
  return 0;
}
