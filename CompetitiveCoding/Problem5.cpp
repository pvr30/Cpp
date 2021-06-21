#include<iostream>
#include<list>
#include<algorithm>
#include<array>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=n;i>=1;i--)
    {
        cout<<a[i]<<" ";
    }
   /* int n;
    cin>>n;
    array<int,n> a;
    for(auto x:a)
    {
        cin>>a;
    }
    a.reverse();
    for(auto x:a)
    {
        cout<<x<<" ";
    }  */
    return 0;
}
