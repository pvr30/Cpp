#include<iostream>
using namespace std;
class demo
{
private:
     int a;
     int b;
public:
    demo(int a,int b)
    {
        this->a=a;      //when we use same name this-> is useful.
        this->b=b;
    }
    void display()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
};
int main()
{
    demo r(10,25);
    r.display();
    return 0;
}