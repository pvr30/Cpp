#include<iostream>
using namespace std;
int x=0;  /// for global variables.
int fun(int n)
{
    //static int x=0;
    if(n>0)
    {
        return fun(n-1)+x;
    }
    return 0;
}
int main()
{
    int n=5;
    cout<<fun(n)<<" ";  ///25
}
