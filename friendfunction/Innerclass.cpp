#include<iostream>
using namespace std;
class Outer
{
public:
      void fun()
      {
        i.display();  
      }
      class Inner  //Inner Class
      {
        public:
             void display(){cout<<"Display Of inner Class"<<endl;}
      };
    Inner i;
};
int main()
{
    Outer r;
    r.fun();
    return 0;
}