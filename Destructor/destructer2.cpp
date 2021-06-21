#include<iostream>
using namespace std;
class demo
{
    int *p;
public:
      demo()
      {
          cout<<"Hello Constructer"<<endl;
      }
     ~demo()
     {cout<<"Hello Destructer"<<endl;}
};
int main()
{
    demo *p=new demo();  //Constructer Is Execute
    delete p;  // Destructer Is Execute
    return 0;
}