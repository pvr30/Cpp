#include<iostream>
using namespace std;
int & fun(int &x)
{
    return x;
}
int main()
{
    int a=10;
    fun(a)=25;  //by using this we can make function as a variable 
    cout<<a<<endl;
    return 0;
}