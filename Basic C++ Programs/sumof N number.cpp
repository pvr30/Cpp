///Sum Of N numbers
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter A Number"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        sum+=i;
    }
    cout<<"The Sum Of Is "<<sum<<endl;
    return 0;
}
