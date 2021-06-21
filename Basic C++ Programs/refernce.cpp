///Reference:- It Is nothing but The nickname of the variable
#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int &y=x;
    cout<<x<<" "<<y<<endl;
    cout<<&x<<" "<<&y<<endl;
    y++;
    cout<<x<<" "<<y<<endl;
    cout<<&x<<" "<<&y<<endl;
    return 0;
}
