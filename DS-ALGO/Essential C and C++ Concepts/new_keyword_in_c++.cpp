/*
"new" is used for accsesing/allocating a heap memory like malloc and calloc
in C.
-> delete is used to deallocate heap memory.
*/
#include<iostream>
using namespace std;

int main()
{
  int n=5;
  int *p;
  p=new int[n];
  for(int i=0;i<5;i++)
  {
    p[i]=i+1;
  }
  for(int i=0;i<5;i++)
  {
    cout << p[i] << ' ';
  }
  delete p; 
  return 0;
}
