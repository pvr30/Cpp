///Sum Of Array Element.
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter No. Of Element Of Array"<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter First Array's Elements"<<endl;
        for(auto  &x:A)
        {
           cin>>x;
        }
        for(int i=0;i<n;i++)
            sum+=A[i];
    cout<<"The Sum Of Element Is "<<sum<<endl;
    return 0;
}
