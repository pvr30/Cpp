#include<iostream>
#include<array>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int** outer=new int*[n];
     for(int i=0;i<n;i++)
     {
         int k;
         cin>>k;
         outer[i]=new int[k];
         for(int j = 0; j < k; j++)
        {
            cin >> outer[i][j];
        }
     }
     while(q!=0)
     {
         int outer_index,inner_index;
         cin >> outer_index >> inner_index;
          cout << outer[outer_index][inner_index] << endl;
          q--;
     }
    return 0;
}
