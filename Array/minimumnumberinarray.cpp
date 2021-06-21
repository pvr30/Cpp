///Find Minimum Number In Array.
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
     int min=A[0];
       for(auto &x:A)
       {
           if(x<min)
           {
               min=x;
           }
       }
    cout<<"The Minimum Number Is "<<min;
    return 0;
}

