/// Function Call By itself is called recursion.
/// In recursion there are two phase 1.Calling And 2.Returning
#include<iostream>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
       /// fun(n-1);  /// Output: 1 2 3  //Head Recursion
        cout<<n<<endl;
        fun(n-1);  /// Output: 3 2 1   // Tail Recursion
    }
}
int main()
{
    int n=3;
    fun(n);
    return 0;
}
