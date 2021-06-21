/*Template := It is a generic/general class or data type which can use for any 
 data type */ 
#include<iostream>
using namespace std;
template<class T>
T add(T x,T y)
{
    return x+y;
}
/*int add(int x,int y)
{
    return x+y;
}
float add(float x,float y)
{
    return x+y;
} */
int main()
{
    cout<<add(10,20)<<endl;
    cout<<add(10.3f,20.5f)<<endl;
    return 0;
}