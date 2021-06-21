///Find Maximum Number In Array.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter No. Of Element Of Array"<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter First Array's Elements"<<endl;
        for(auto  &x:A)
        {
           cin>>x;
        }
     int max=A[0];
       for(int &x:A)
       {
           if(x>max)
           {
               max=x;
           }
       }
    cout<<"The Maximum Number Is "<<max;
    return 0;
}
