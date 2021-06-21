// Call By Value
#include<iostream>
using namespace std;
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a=10,b=20;
    swap(10,20);
    cout<<"After Swaping a="<<a<<" and  "<<"b="<<b<<endl;
    return 0;
}
  //this will not get result a=10 and b=20 are remaining same