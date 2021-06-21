///For Each Loop
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size of Array"<<endl;
    cin>>n;
    int  a[n];
    cout<<"Enter Elements"<<endl;
    for(auto  &x:a)
    {
        cin>>x;
    }
    for(auto  &x:a)
    {
        cout<<x<<endl;
    }
    return 0;
}
