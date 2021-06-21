/// Sorting In Ascending Order.
#include<iostream>
using  namespace std;
int main()
{
    int n;
    cout<<"Enter No. Of Elements in Array"<<endl;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int min=A[0];
     for(int i=0;i<n;i++)
     {
         if(A[i]<min)
          {
            cout<<A[i]<<endl;
            min=A[i];
          }
     }

    return 0;
}
