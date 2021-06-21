// Linear Search Using Function
#include<iostream>
using namespace std;
int search(int s,int A[],int key)
{
      for(int i=0;i<s;i++)
      {
          if(key==A[i])
             return i;
      }
}
int main()
{
    int size,key;
    cout<<"Enter Size Of Array"<<endl;
    cin>>size;
    int A[size];
    cout<<"Enter Elements"<<endl;
       for(auto &x:A)
       {
           cin>>x;
       }
    cout<<"Enter Element Which You Want to found its key"<<endl;
    cin>>key;
      int index=search(size,A,key);
      cout<<"The Element is at key "<<index+1<<endl; 
}