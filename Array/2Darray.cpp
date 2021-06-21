/// 2D Array
#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter Row Element No."<<endl;
    cin>>n1;
    cout<<"Enter Column Element No."<<endl;
    cin>>n2;
    int A[n1][n2];
      for(int i=0;i<n1;i++)
      {
          cout<<"Enter "<<i+1<<" Row "<<"Elements"<<endl;
          for(int j=0;j<n2;j++)
          {
              cin>>A[i][j];
          }
          cout<<endl;
      }
      cout<<"The Matrix Is: "<<endl;
      for(int i=0;i<n1;i++)
      {
          for(int j=0;j<n2;j++)
          {
              cout<<A[i][j]<<" ";
          }
          cout<<endl;
      }
    return 0;
}
