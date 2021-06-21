#include<iostream>
using namespace std;
void display();
int main()
{
   void (*fp)();
   fp=display;
   (*fp)();
    return 0;
}
void display()
{
    cout<<"hello";
}
