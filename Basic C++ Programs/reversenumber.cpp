///Reverse Number
#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,r;
    cout<<"Enter A Number"<<endl;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=(rev*10)+r;
    }
    cout<<"The Reverse Number Is "<<rev<<endl;
    return 0;
}
