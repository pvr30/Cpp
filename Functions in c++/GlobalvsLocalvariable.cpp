#include<iostream>
using namespace std;
int g;   //Global variable  the value of global variable is by defualt zero 
void fun()
{
    int a=5;  // local variable
    g=g+a;
    cout<<g<<endl;
}
int main()
{
    g=15;   
    fun();
    g++;
    cout<<g<<endl;
   /* if(g)
    cout<<"good"<<endl;
    else
    cout<<"Morning"<<endl; */
    return 0;
}