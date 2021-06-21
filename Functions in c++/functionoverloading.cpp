/*Function Overloading:- We can use same name for many functions but 
the return type and parameters passing into function are different*/
#include<iostream>
using namespace std;
int add(int x,int y)
{
    return x+y;
}
int add(int x,int y,int z)
{
    return x+y+z;
}
float add(float x,float y)
{
    return x+y;
}
int main()
{
    cout<<add(10,15)<<endl;
    cout<<add(10,10,10)<<endl;
    cout<<add(12.5f,10.0f)<<endl;
    return 0;
}