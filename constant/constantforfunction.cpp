#include<iostream>
using namespace std;
class demo
{
public:
int a=10;
int b=20;
     void fun() const  //-> 5 use of const
     {
    //  a++;
      cout<<a<<endl;
     } 
};
int main()
{
    demo d1;
    d1.fun();
    return 0;
}