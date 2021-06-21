#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n = 5;
  int *p;
  p = (int *)calloc(n,sizeof(int));
  for(int i =0;i<n;i++)
  {
    p[i]=i+1;
  }
  printf("Before Reallocation.\n");
  for(int i =0;i<n;i++)
  {
    printf("%d ",p[i]);
  }
  // Redefine Size .
  n = 10;
  // Fill Up The Elements.
  for(int i=5;i<=n;i++)
  {
    p[i]=i+1;
  }
  //Printing Array After Adding Elements.
  printf("\nAfter Incresing Size And Add New Elements.\n");
  for(int i=0;i<n;i++)
  {
    printf("%d ",p[i]);
  }
  return 0;
}
