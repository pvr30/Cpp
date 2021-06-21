#include<iostream>
using namespace std;
class Parent
{
public:
       Parent()
       {
           cout<<"Constructer Of Parent"<<endl;
       }
      virtual ~Parent()
       {
           cout<<"Destructer Of Parent"<<endl;
       }
};
class Child : public Parent
{
public:
       Child() 
       {
           cout<<"Constructer Of Child"<<endl;
       }
       ~Child()
       {
           cout<<"Destructer Of Child"<<endl;
       }
};
int main()
{
    Parent *p=new Child();
    delete p;
    return 0;
}