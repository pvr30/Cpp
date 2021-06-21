#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> f1={2,6,7,4};
    forward_list<int> f2(2,10);
    for(auto x:f1)
    { cout<<x<<" "; }
    cout<<"\n";
    for(auto x:f2)
    { cout<<x<<" "; }
    return 0;
}