#include<iostream>
using namespace std;
namespace First
{
   void print()
   {
    cout<<"First"<<endl;
   }
};
namespace Second
{
   void print()
  {
    cout<<"Second"<<endl;
  }
};
using namespace First;
int main()
{
    print();
    Second :: print();  
    return 0;
}