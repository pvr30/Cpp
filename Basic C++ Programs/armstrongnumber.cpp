///Armstrong Number.
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,r,dummy;
    cout<<"Enter A Number"<<endl;
    cin>>num;
    dummy=num;
    while(num>0)
    {
        r=num%10;
        num=num/10;
        sum+=(r*r*r);
    }
    if(dummy==sum)
       cout<<"The Given Number Is Armstrong Number"<<endl;
    else
        cout<<"The Given Number Is Not Armstrong Number"<<endl;
    return 0;
}

