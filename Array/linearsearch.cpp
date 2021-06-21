///Linear Search
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
     int key;
     cout<<"Enter Element Which You Want Find Its Key"<<endl;
     cin>>key;
      for(int i=0;i<n;i++)
      {
          if(key==A[i])
          {
              cout<<"The Element Is At Key "<<i+1<<endl;
              ///you can write return 0;
              exit(0);
          }
      }
      cout<<"Not Found Your Key"<<endl;
    return 0;
}
