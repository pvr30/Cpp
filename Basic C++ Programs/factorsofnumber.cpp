///Find Factors Of Given Number.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter A Number"<<endl;
    cin>>num;
    cout<<"The Factors Of Given Number Are"<<endl;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
