///Palindrome Number
///Reverse Number
#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,r,dummy;
    cout<<"Enter A Number"<<endl;
    cin>>n;
    dummy=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=(rev*10)+r;
    }
    if(dummy==rev)
        cout<<"The Given Number Is Palindrome"<<endl;
    else
        cout<<"The Given Number Is Not Palindrome"<<endl;
    return 0;
}

