#include<iostream>
using namespace std;
int add(int x,int y)
{
    return x+y;
}
float add(float x,float y,float z)
{
    return x+y+z;
}
int main()
{
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    int c=add(a,b);
    cout<<c<<endl;
    float p,q,r;
    cout<<"enter three numbers"<<endl;
    cin>>p>>q>>r;
    float d=add(p,q,r);
    cout<<d<<endl;
    return 0;
}