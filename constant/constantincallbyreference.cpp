#include<iostream>
using namespace std;
void fun(const int &a,int &b) //-> 6 use of constant
{
  //  a++;
    cout<<a<<" "<<b<<endl;
}
int main()
{
    int a=10,b=20;
    fun(a,b);
    return 0;
}