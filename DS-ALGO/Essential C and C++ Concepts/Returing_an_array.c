#include<stdio.h>

// Array As A Paramter.
/*
void array(int A[],int n)
{
  for(int i =0;i<n;i++)
  {
    A[i]=i+1;
  }
}
int main()
{
  int A[5],n=5;
  array(A,n);
  for(int i=0;i<n;i++)
  {
    printf("%d ",A[i]);
  }
  return 0;
}
*/

// Return An array
int array(int n)
{
  int *p;
  p = (int *)malloc(n*sizeof(int));
  for(int i =0;i<n;i++)
  {
    p[i]=i+1;
  }
  return (p);
}
int main()
{
  int *A;
  A = array(5);
  for(int i =0;i<5;i++){
      printf("%d ",A[i]);
  }
  return 0;
}
