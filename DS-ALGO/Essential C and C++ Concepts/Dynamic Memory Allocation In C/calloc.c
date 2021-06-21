/*
“calloc” or “contiguous allocation” method in C is used to dynamically allocate
the specified number of blocks of memory of the specified type.
It initializes each block with a default value ‘0’.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n;
  printf("Enter No. Of Elements\n");
  scanf("%d",&n);
  int *p;
  p = (int *)calloc(n,sizeof(int));
  free(p);  // free() is used for deallocate the memory.
  for(int i=0;i<n;i++)
  {
      p[i]=i+1;
  }
  for(int i=0;i<n;i++)
  {
      printf("%d ",p[i]);
  }
  return 0;
}
