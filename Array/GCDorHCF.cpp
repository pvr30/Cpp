///GCD or HCF
///GCD=Greatest Common Divider and HCF=Highest Common Factor.
#include<iostream>
using namespace std;
int main()
{
    int a,b,d1,d2;
    cout<<"Enter Two Numbers"<<endl;
    cin>>a>>b;
    d1=a;
    d2=b;
      while(a!=b)
      {
          if(a>b)
             a=a-b;
          else if(b>a)
             b=b-a;
      }
      cout<<"The HCF Of "<<d1<<" and "<<d2<<" is "<<a<<endl;
    return 0;
}
