///Sum Of Digits In A Number.
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,r;
    cout<<"Enter A Number"<<endl;
    cin>>num;
    while(num>0)
    {
        r=num%10;
        num=num/10;
        sum+=r;
    }
    cout<<"The Sum Is "<<sum<<endl;
    return 0;
}
