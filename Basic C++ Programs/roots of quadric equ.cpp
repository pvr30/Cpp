///Find roots of quadric equation
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    float r1,r2;
    cout<<"Enter a,b and c"<<endl;
    cin>>a>>b>>c;
    r1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    r2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
    cout<<"The Roots are "<<r1<<" "<<r2<<endl;
    return 0;
}
