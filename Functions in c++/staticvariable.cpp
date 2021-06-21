//Static Variable
#include<iostream>
using namespace std;
void fun()
{
    static int i;   // it like global variable but it can access only for function
    int j=5;
    i++,j++;
    cout<<j<<" "<<i<<endl;
}
int main()
{
    fun();
    fun();
    fun();
    return 0;
}