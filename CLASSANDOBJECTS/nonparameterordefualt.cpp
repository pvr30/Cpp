#include<iostream>
using namespace std;
class Number
{
    private:
        int a;
        int b;
    public:
        Number()
        {
            a=5;
            b=10;
        }
        void display()
        {
            cout<<"a="<<a<<" b="<<b<<endl;
        }
};
int main()
{
    Number r1;
    r1.display();
}