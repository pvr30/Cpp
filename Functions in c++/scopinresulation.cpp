#include<iostream>
using namespace std;
int x=10;  // Global Variable
int main()
{
    int x=20;  //Local variable
      {
          int x=30;  //Local Variable
          cout<<x<<endl;
      }
    cout<<x<<endl;
    ::x++;   //we can access global varible by using ::(scope resulation)
    cout<<::x<<endl;
    return 0;
}