#include<iostream>
using namespace std;
#define PI 3.14
#define C  cout
#define E  endl
#define fun() {int a=10,b=20; cout<<a<<" "<<b<<endl;}
#define msg(x) #x
#ifndef PI
      #define PI 3
#endif
int main()
{
    C<<PI<<E;
    fun();
    cout<<msg(Hello)<<endl;
    return 0;
}