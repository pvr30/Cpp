#include<iostream>
using namespace std;
class Number
{
    private:
        int a;
        int b;
    public:
        Number(int i=0,int j=0);
        void display();
};
  Number :: Number(int i,int j)
        {
            a=i;
            b=j;
        }
 void Number :: display()
        {
            cout<<"a="<<a<<" b="<<b<<endl;
        }
int main()
{
    Number r1(5,10);
    r1.display();
}