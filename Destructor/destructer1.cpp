#include<iostream>
using namespace std;
class demo
{
public:
      demo()
      {cout<<"Hello Constructer"<<endl;}
     ~demo()
     {cout<<"Hello Destructer"<<endl;}
};
int main()
{
    demo d1;
    return 0;
}