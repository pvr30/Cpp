#include<iostream>
using namespace std;
int main()
{
    int n,r,i,rev=0,rev2=0,dr,r2;
    cout<<"Enter Any Decimal Number"<<endl;
    cin>>n;
    while(n>0)
    {
        r=n%2;
        n=n/2;
        rev=(rev*10)+r;
    }
    //cout<<rev;
    dr=rev;

    while(dr>0)
    {
        r2=dr%10;
        dr=dr/10;
        rev2=(rev2*10)+r2;
    }
    cout<<rev2;
    return 0;
}
