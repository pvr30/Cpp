/// Tree Recursion:- If the Recursive function is more than one then its called...
#include<iostream>
using namespace std;
void fun(int n)
{
    if(n>0)    // 3,2,1,0,1
    {
        cout<<n<<" ";  //3,2,1,2,1,1
        fun(n-1);  // call-1,call-2,call-3
        fun(n-1);  // in last this call happen
    }
}
int main()
{
    int n=3;
    fun(n);
    return 0;
}
