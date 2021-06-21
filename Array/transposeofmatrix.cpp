/// Transpose Of a Matrix.
#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter No. Of Rows of a matrix"<<endl;
    cin>>n1;
    cout<<"Enter No. Of Column of a matrix"<<endl;
    cin>>n2;
    int A[n1][n2];
     cout<<"Enter Elements Of A Matrix"<<endl;
      for(int i=0;i<n1;i++)
      {
          for(int j=0;j<n2;j++)
          {
              cin>>A[i][j];
          }
      }
      cout<<"The Matrix Is "<<endl;
      for(int i=0;i<n1;i++)
      {
          for(int j=0;j<n2;j++)
          {
              cout<<A[i][j]<<" ";
          }
          cout<<endl;
      }
    cout<<"The Transpose Of a Matrix Is "<<endl;
      for(int i=0;i<n1;i++)
      {
          for(int j=0;j<n2;j++)
          {
              cout<<A[j][i]<<" ";
          }
          cout<<endl;
      }
    return 0;
}
