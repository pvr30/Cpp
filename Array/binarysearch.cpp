///Binary Search
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
     int mid,first=0,last=n,key;
     cout<<"Enter Element Which You Want Find Where It Is "<<endl;
     cin>>key;
       while(first<=last)
       {
           mid=(first+last)/2;
            if(key==A[mid])
            {
                cout<<"Element Found At "<<mid+1;
                exit(0);
            }
            else if(key>A[mid])
            {
                first=mid+1;
            }
            else if(key<A[mid])
            {
                last=mid-1;
            }
       }
       cout<<"Not Found Your Element"<<endl;
    return 0;
}
