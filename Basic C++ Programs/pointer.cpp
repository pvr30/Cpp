///A pointer is a variable that holds the address of another variable of same data type.
#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int *p; ///Declaration Of The Pointer
     p=&x;   ///Initialization Of The Pointer
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<*p<<endl;    ///Dereferencing Of The Pointer
    cout<<p<<endl;
    cout<<&p<<endl;
    return 0;
}
