#include<iostream>
using namespace std;
template<class T>
T maxim(T x,T y)
{
    return x>y ? x : y;
}
int main()
{
    cout<<maxim<int>(10,20)<<endl;
    cout<<maxim<float>(10.5f,30.5f)<<endl;
    cout<<maxim<char>('A','B')<<endl;
return 0;
}