///Multiplication Of Matrix
#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter Row Element No."<<endl;
    cin>>n1;
    cout<<"Enter Column Element No."<<endl;
    cin>>n2;
    int A[n1][n2],B[n1][n2],C[n1][n2];
    cout<<"Enter First Matrix: "<<endl;
      for(int i=0;i<n1;i++)
      {
          cout<<"Enter "<<i+1<<" Row "<<"Elements"<<endl;
          for(int j=0;j<n2;j++)
          {
              cin>>A[i][j];
          }
          cout<<endl;
      }
     cout<<"Enter Second Matrix: "<<endl;
      for(int i=0;i<n1;i++)
      {
          cout<<"Enter "<<i+1<<" Row "<<"Elements"<<endl;
          for(int j=0;j<n2;j++)
          {
              cin>>B[i][j];
          }
          cout<<endl;
      }
      for(int i=0;i<n1;i++)
      {
          for(int j=0;j<n2;j++)
          {
              C[i][j]=A[i][j]*B[i][j];
          }
          cout<<endl;
      }
      cout<<"After Multiplication Matrix Is: "<<endl;
      for(int i=0;i<n1;i++)
      {
          for(int j=0;j<n2;j++)
          {
            cout<<C[i][j]<<" ";
          }
          cout<<endl;
      }
    return 0;
}

