//Inline Function
#include<iostream>
using namespace std;
class demo 
{
public:
    void fun1()   //Inline function
    {
        cout<<"Hello"<<endl;
    }    
    void fun2(); //NonInline Function
    void fun3();
};
void demo :: fun2()
{
    cout<<"How are You"<<endl;
}
inline void demo :: fun3()  // we makeit inline function
{
    cout<<"I am Fine"<<endl;
}
int main()
{
    demo r;
    r.fun1();
    r.fun2();
    r.fun3();
    return 0;
}