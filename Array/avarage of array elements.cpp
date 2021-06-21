/// Average Of Array Element.
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter No. Of Elements In Array"<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter Elements In Array"<<endl;
      for(int i=0;i<n;i++)
      {
          cin>>A[i];
          sum+=A[i];
      }
    int avr;
    avr=sum/n;
    cout<<"The Average Of Array Element Is "<<avr;
    return 0;
}
