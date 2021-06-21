#include<iostream>
using namespace std;
int max(int,int);
int min(int,int);
int main()
{
    int a,b;
    cout<<"Enter two Number"<<endl;
    cin>>a>>b;
    int (*fp)(int,int);
    fp=max;
    (*fp)(a,b);
    fp=min;
    (*fp)(a,b);
    return 0;
}
int max(int x,int y)
{
    if(x>y)
        cout<<x<<" is max"<<endl;
}
int min(int x,int y)
{
    cout<<y<<" is min"<<endl;
}
