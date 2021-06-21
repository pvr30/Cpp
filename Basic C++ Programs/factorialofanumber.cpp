/// Find Factorial Of A Given Number.
#include<iostream>
using namespace std;
int main()
{
    int num,fac=1;
    cout<<"Enter A Number"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        fac*=i;
    }
    cout<<"The Factorial Of A Given Number Is "<<fac<<endl;
    return 0;
}
