///Array
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size Of Array"<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter Elements"<<endl;
       for(int i=0;i<n;i++)
         cin>>A[i];
       for(int i=0;i<n;i++)
        cout<<A[i]<<endl;
    return 0;
}
