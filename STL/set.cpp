//The set class gives the result in accending/decending order. 
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s={1,2,73,44,54};
    s.insert(10);
    s.insert(20);
    for(auto x:s)
    { cout<<x<<" "; }
    return 0;
}