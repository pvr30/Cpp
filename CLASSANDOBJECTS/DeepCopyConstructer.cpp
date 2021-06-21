// Deep Copy Constructer
#include<iostream>
using namespace std;
class Test
{
private:
    int a;
    int *p;
public:
    Test(int x,int y)
    {
        a=x;
        p=new int;
        *p=y;
    }
    Test (const Test &t)
    {
        a=t.a;
        //p=t.p;
        p=new int;
        *p=*(t.p);
    }
    void print()
    {
        cout<<a<<" "<<*p<<endl;
    }
};
int main()
{
    Test r1(5,10);
    Test r2=r1;
    r2.print();
}