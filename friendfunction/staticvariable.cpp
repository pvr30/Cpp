//Static Member Of Class (Static Variable).
#include<iostream>
using namespace std;
class demo
{
public:
       int a;
    static int count;
    void set()
    {
        a=10;
        count++;
        cout<<a<<" "<<count<<endl;
    }
};
int demo::count=0;
int main()
{
    demo d1,d2,d3,d4;
    d1.set();
    d2.set();
    d1.count=20;
    d3.set();
    d4.set();
    cout<<demo::count<<endl;
    return 0;
}